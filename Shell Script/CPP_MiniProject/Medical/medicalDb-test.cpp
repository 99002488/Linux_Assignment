

#include "medical.h"
#include "sickTreat.h"
#include "medicalDb.h"
#include <gtest/gtest.h>
#include<iostream>
#include<pthread.h>
#include<semaphore.h>
#include<list>
#include<iterator>
#include<cstdint>


pthread_mutex_t m1=PTHREAD_MUTEX_INITIALIZER;
sem_t s1;
MedicalDb medicines;


void* efun1(void* pv){



        pthread_mutex_lock(&m1);

        medicines.addMedicine(1,"roko",2,"r","12/2019","11/2022",20.00,"diarrhoea","tablet");
        medicines.addMedicine(2,"cetacin",500,"c","06/2020","06/2022",15.00,"fever","tablet");
        medicines.addMedicine(3,"okcet",10,"o","06/2016","06/2022",18.00,"cold","tablet");
        medicines.addMedicine(4,"respira",15,"r","10/2019","10/2022",20.00,"cough","syrup");
        medicines.addMedicine(5,"zathrin",500,"z","04/2020","03/2022",118.00,"antibiotic","tablet");
        medicines.addMedicine(6,"omez",2,"o","05/2019","05/2022",15.00,"acidity","capsule");

        pthread_mutex_unlock(&m1);
        sem_post(&s1);

}


void* efun2(void* pv)        //consumer
{


        sem_wait(&s1);            //changing sequence lead to deadlock
        pthread_mutex_lock(&m1);

        std::cout<<"\n";
        std::cout<<"The owner added :"<<medicines.countAll()<<" Medicines\n";
        std::cout<<"\n";

        pthread_mutex_unlock(&m1);
        //pthread_exit(NULL);
}

namespace {

class SickTreatDbTest : public ::testing::Test {

protected:
  void SetUp() {

  }
  void TearDown() {}
  //StudentDB students;
};

TEST_F(SickTreatDbTest, AddMedicineTest) {

    pthread_t pt1,pt2;    //thread handles
    sem_init(&s1,0,0);
    pthread_create(&pt1,NULL,efun1,NULL);
    pthread_create(&pt2,NULL,efun2,NULL);
    pthread_join(pt1,NULL);
    pthread_join(pt2,NULL);

    medicines.addMedicine(7,"dulcoflex",5,"d","05/2020","04/2022",11.00,"constipation","tablet");
    EXPECT_EQ(7, medicines.countAll());

    sem_destroy(&s1);
    pthread_mutex_destroy(&m1);
}


TEST_F(SickTreatDbTest, RemoveMedicineTest) {
  medicines.removeMedicine("roko");
  EXPECT_EQ(6, medicines.countAll());
}
TEST_F(SickTreatDbTest, CountTest) {             //Just After Setup
  EXPECT_EQ(6, medicines.countAll());
}
TEST_F(SickTreatDbTest, AnotherTest) {         //Just After Setup
  medicines.addMedicine(8,"enzoflam",20,"e","12/2019","11/2022",25.00,"pain killer","tablet");
  medicines.addMedicine(9,"dia free",15,"r","02/2019","01/2022",280.00,"diabetes","tablet");
  EXPECT_EQ(8, medicines.countAll());
}
}

