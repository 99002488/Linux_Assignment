

#include"medical.h"
#include <string>


Medical::Medical():ID(0),name(""),concentration(0),section(""),mfgDate(""),expDate(""),price(0.0){}

Medical::Medical(int ID, std::string name,int concentration,std::string section,std::string mfgDate,std::string expDate, double price) : ID(ID),name(name),concentration(concentration),section(section),mfgDate(mfgDate),expDate(expDate),price(price) {}
