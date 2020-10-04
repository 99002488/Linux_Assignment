


#include <string>
#pragma once


class Medical
{
    public:
        int ID,concentration;
        std::string name,section,mfgDate,expDate;
        double price;

    public:
        Medical();
        Medical(int ID, std::string name,int concentration,std::string section,std::string mfgDate,std::string expDate, double price);
        virtual double getPrice()=0;


};

