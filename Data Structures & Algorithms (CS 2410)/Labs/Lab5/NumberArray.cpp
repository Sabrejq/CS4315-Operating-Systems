//
// Created by Juilo Quintero on 10/16/18.
//

#include "NumberArray.h"
#include <iostream>
using namespace std;

NumberArray::NumberArray(int p){
    array = new float[p];
    length = p;
}


void NumberArray::setArray(float value)
{
    for (int i = 0; i < length; ++i) {
        cout << "Enter number is " << i+1 << ": ";
        cin >> value;
        array[i] = value;

    }

}
 float NumberArray::getValues() {

     for (int i = 0; i < length ; ++i) {

         cout << "Number "<< i+1<<": "<<array[i] <<endl;
     }
}

float NumberArray::getAverage() {

    float sum =0;

    for(int i=0; i<length; i++)
        sum =sum + array[i];
    return sum/length;
}

NumberArray::~NumberArray(){ delete [] array;}

