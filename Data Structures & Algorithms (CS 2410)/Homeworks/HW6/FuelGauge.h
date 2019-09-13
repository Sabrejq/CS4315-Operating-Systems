//
// Created by Juilo Quintero on 11/2/18.
//
#ifndef HW6_FuelGauge_H
#define HW6_FuelGauge_H

#include <iostream>
using namespace std;

class FuelGauge
{

private:
    int fuel;
    const int gallonsMax = 15;

public:

    FuelGauge() { fuel = 0;}

    void gallonsDown(int fuelOut) { fuel = fuel - fuelOut; }

    void gallonsUp(int fuelIn) { fuel =  fuel + fuelIn; }

    int getGallons() { return fuel;}

    int getGallonMax(){ return gallonsMax;}

};

#endif