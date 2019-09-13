//
// Created by Juilo Quintero on 10/9/18.
//

#include "Circles.h"

#include <iostream>
#include "Circles.h"
using namespace std;

const double PI = 3.14;

Circles::Circles()
{
    radius = 1;
    center_x = 0;
    center_y = 0;
}

// Fill in the code to implement the non-default constructor
Circles :: Circles (float r){
    radius = r;
    center_x = 0;
    center_y = 0;
}


Circles :: Circles(int x, int y){
    radius = 1;
    center_x = x;
    center_y = y;

}

Circles::Circles(float r, int x, int y) {
    radius = r;
    center_x = x;
    center_y = y;

}


// Fill in the code to implement the findArea member function

double Circles::findArea() {
    return PI * radius *radius;
}
// Fill in the code to implement the findCircumference member function
double Circles::findCircumference(){
    return 2 * PI * radius;
}


// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
void Circles::printCircleStats()

{
    cout << "The radius of the circle is " << radius << endl;
    cout << "The center of the circle is (" << center_x
         << "'" << center_y << ")" << endl;
}
 Circles::~Circles() {

    cout<< "This concludes the Circles class." << endl;
}

