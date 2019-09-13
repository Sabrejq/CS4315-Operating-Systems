/*
 * Julio Quintero and Dang Dung Team #12
 */

#include <iostream>
#include "Odometer.h"
#include "FuelGauge.h"
using namespace std;

int main()
{
    FuelGauge fuelInGallons;
    Odometer odometer(0, &fuelInGallons);

// Fill the car with gasoline

    while (fuelInGallons.getGallons() < fuelInGallons.getGallonMax() ){ fuelInGallons.gallonsUp(1);}

    // Driving
    do {
        odometer.distanceUp();

        // Display the mileage and amount of fuel.
        cout << "Mileage: " << odometer.getMileage() << "\nFuel level: " << fuelInGallons.getGallons() << " gallons\n";
        cout << "***************************************\n";
    }
    while (fuelInGallons.getGallons() > 0);

    cout << "Fuel tank is empty";

    return 0;
}