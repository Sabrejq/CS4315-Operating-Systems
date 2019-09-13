//
// Created by Juilo Quintero on 10/16/18.
//

#ifndef LAB5_NUMBERARRAY_H
#define LAB5_NUMBERARRAY_H


class NumberArray {

public:
    NumberArray();
    ~NumberArray();
    NumberArray(int p);
    void setArray(float val);
    float getValues();
    float getAverage();

private:
    float *array;
    int length;



};


#endif //LAB5_NUMBERARRAY_H
