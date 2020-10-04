

#include <string>
#include "medical.h"
#pragma once


class SickTreat : public Medical {

private :

    std::string type,variants;

public :

    SickTreat();
    SickTreat(int ,std::string, int, std::string, std::string, std::string,double, std::string, std::string);

    int getID();
    std::string getType();
    std::string getName();
    double getPrice();
};
