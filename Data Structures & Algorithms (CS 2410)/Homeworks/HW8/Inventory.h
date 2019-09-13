//
// Created by Juilo Quintero on 11/21/18.
//

#ifndef LASTHW_INVENTORY_H
#define LASTHW_INVENTORY_H

#include <iostream>
#include <vector>
using namespace std;

class Inventory {

private:

    int serialNum, lotNum;
    int  manufactDate[3]{}; // [dd,mm,yyyy]



public:
    Inventory()
    {
        serialNum = 0;
        lotNum = 0;
    }

    void setSerial(int num);
    void setLot(int num);
    void setManufact(int day, int month, int year);
    int getSerial();
    int getLot();
    std:: string getManufact();
    void displayALLInvent();


};



#endif //LASTHW_INVENTORY_H
