//
// Created by Juilo Quintero on 10/30/18.
//

#ifndef LAB_6_THREED_H
#define LAB_6_THREED_H
#include "TwoD.h"
#include<math.h>

//inherit 2D class
class ThreeD : public TwoD
{
private:
    double z;
public:

    ThreeD(double i, double j, double k):TwoD(i, j)
    {
        x = i;
        y = j;
        z = k;

    }

    double getvalueZ(){
        return z;
    }

    double compute(ThreeD objone){

        return sqrt((x-objone.getvalueX())*(x-objone.getvalueX()) + (y-objone.getvalueY())*(y-objone.getvalueY()) +
        (z-objone.getvalueZ())*(z-objone.getvalueZ()));
    }




};

#endif //LAB_6_THREED_H
