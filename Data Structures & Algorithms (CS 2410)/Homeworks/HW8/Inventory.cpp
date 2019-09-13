
#include <iostream>
#include <sstream>
#include "Inventory.h"

void Inventory:: setSerial(int serial)
{
    serialNum = serial;

}

void  Inventory:: setLot(int lot)
{
    lotNum = lot;

}

void Inventory::setManufact(int day, int month, int year)
{
    manufactDate[0] = day;
    manufactDate[1] = month;
    manufactDate[2] = year;

}

int Inventory::getLot()
{
    return lotNum;
}

int Inventory::getSerial()
{
    return serialNum;
}

std:: string Inventory::getManufact()
{
    std:: ostringstream out;

    out << manufactDate[0]<<"/"<< manufactDate[1]<<"/"<< manufactDate[2];

    return out.str();

}


void Inventory ::displayALLInvent()
{

    std::cout << "The Serial Number is: " << serialNum << std:: endl;
    std::cout << "The Lot Number is: " << lotNum <<  std:: endl;
    std::cout << "The Manufacture date 'dd/mm/yyyy' is: "<<manufactDate[0]<<"/"<<manufactDate[1]<<"/"<<manufactDate[2]<<std::endl;
}

