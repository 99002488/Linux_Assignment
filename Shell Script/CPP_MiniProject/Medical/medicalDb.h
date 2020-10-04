
#include<string>
#include<cstdint>
#include "medical.h"
#include "sickTreat.h"
#pragma once
#include <list>
#include <iterator>
#pragma once


class MedicalDb :  public SickTreat {

public :

std::list <SickTreat> st;

public :

    void addMedicine(int ,std::string,int,std::string,std::string,std::string,double,std::string,std::string);
    void removeMedicine(std::string);
    SickTreat* findMedicineById(int);
    int countAll();

};





