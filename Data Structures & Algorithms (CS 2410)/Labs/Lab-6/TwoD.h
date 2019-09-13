//
// Created by Juilo Quintero on 10/30/18.
//

#ifndef LAB_6_TWOD_H
#define LAB_6_TWOD_H

#include <iostream>
#include<math.h>
using namespace std;

class TwoD
{
protected:
    double x, y; // x and y  coordinates
public:

    double getvalueX(){
        return x;
    }
    double getvalueY(){
        return y;
    }



    TwoD(double i, double j)
    {
        x = i;
        y = j;
    }

    double compute(TwoD objone){

        return sqrt((x-objone.getvalueX())*(x-objone.getvalueX()) + (y-objone.getvalueY())*(y-objone.getvalueY()));
    }


};


#endif //LAB_6_TWOD_H
