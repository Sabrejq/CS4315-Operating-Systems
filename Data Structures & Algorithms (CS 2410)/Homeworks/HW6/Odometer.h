//
// Created by Juilo Quintero on 11/2/18.
//
#include "FuelGauge.h"

#ifndef HW6_Odometer_H
#define HW6_Odometer_H

class Odometer
{

private:
    int mileage;
    // pointer to fuel in  FuelGauge class
    FuelGauge *fuelPointer;
    const int fuelEconomy = 24;

public:

    Odometer(int m, FuelGauge *fuelp)
    {
        fuelPointer = fuelp;
        mileage = m;
    }


    void distanceUp()
    {
        while (mileage < 999999)
        {
            mileage = mileage + 1;

            if (mileage > 999999)
            {
                mileage = 0;
            }
            break;
        }

        // every time that multiples of 24 are reach, fuel goes down 1
        if (mileage % fuelEconomy == 0) { fuelPointer->gallonsDown(1);}
    }

    int getMileage() { return mileage;}
};

#endif