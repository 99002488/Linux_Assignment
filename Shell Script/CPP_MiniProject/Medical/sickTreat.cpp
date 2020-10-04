

#include <string>
#include "medical.h"
#include "sickTreat.h"


SickTreat::SickTreat():Medical(),type(""),
    variants(""){}


SickTreat::SickTreat(int ID, std::string name,int concentration,std::string section,std::string mfgDate,std::string expDate,double price,std::string type,std::string variants):
    Medical(ID,name,concentration,section,mfgDate,expDate,price),type(type),variants(variants){

    }



    int SickTreat::getID(){

    return ID;

    }
    std::string SickTreat::getType(){

    return type;

    }
    std::string SickTreat::getName(){

    return name;

    }

    double SickTreat::getPrice(){

    return price;

    }


