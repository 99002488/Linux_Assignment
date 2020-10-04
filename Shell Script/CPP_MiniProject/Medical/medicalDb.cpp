

#include "sickTreat.h"
#include "medical.h"
#include "medicalDb.h"
#include <string>

#include <list>
#include <iterator>

#include <thread>
#include <semaphore.h>
#include <iostream>




	void MedicalDb::addMedicine(int ID, std::string name,int concentration,std::string section,std::string mfgDate,std::string expDate, double price, std::string type,std::string variants){

    st.push_back(SickTreat(ID, name,concentration,section,mfgDate,expDate,price,type,variants));


	}
	void MedicalDb::removeMedicine(std::string name){

    std::list<SickTreat> :: iterator iter;

    for(iter=st.begin();iter!=st.end();iter++)
    {
        if(iter->getName()== name)
        {
           st.erase(iter);
           break;
        }
    }


    }


    int MedicalDb::countAll(){

          return st.size();
    }

