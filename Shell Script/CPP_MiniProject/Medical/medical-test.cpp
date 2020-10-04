
#include "medical.h"
#include "sickTreat.h"
#include "medicalDb.h"
#include <gtest/gtest.h>

namespace {

class MedicalTest : public ::testing::Test {

protected:
  void SetUp() { // override {
    ptr = new SickTreat(1,"roko",2,"r","12/2019","11/2022",20.00,"diarrhoea","tablet");
  }
  void TearDown() {
    delete ptr;
  }
  Medical *ptr;
};

TEST_F(MedicalTest, DefaultConstructor) {
  SickTreat ft;
  EXPECT_EQ(0, ft.getID());
  EXPECT_EQ(0, ft.getType().length());
  //EXPECT_EQ(0, ft.getName().length());
  EXPECT_EQ(0, ft.getPrice());
  //EXPECT_EQ(0, ft.getDistance());
}
TEST_F(MedicalTest, ParameterizedConstructor) {
  SickTreat *fptr = dynamic_cast<SickTreat*>(ptr);
  EXPECT_EQ( 1, fptr->getID());
  EXPECT_STREQ("diarrhoea", fptr->getType().c_str());
  EXPECT_STREQ("roko", fptr->getName().c_str());
  EXPECT_EQ(20.00, fptr->getPrice());
//  EXPECT_EQ(8, fptr->getDistance());
}

TEST_F(MedicalTest, AnotherTest) {
  SickTreat ft(2,"cetacin",500,"c","06/2020","06/2022",15.00,"fever","tablet");
  Medical *pt = &ft;
  EXPECT_EQ( 2, ft.getID());
  EXPECT_STREQ("fever", ft.getType().c_str());
  EXPECT_STREQ("cetacin", ft.getName().c_str());
  EXPECT_EQ(15.00, ft.getPrice());
}

}


