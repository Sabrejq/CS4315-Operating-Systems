#include <iostream>
#include "NumberArray.h"
using namespace std;

int main() {



    float user_index;

    cout << "How many number do you want to store?" << endl;
    cin >> user_index;

    NumberArray my_array(user_index);
    my_array.setArray(user_index);

    cout <<"--------------------------" << endl;

    cout <<"These are the numbers you entered:" << endl;
    my_array.getValues();
    cout << "-------------------------" << endl;


    cout << "average value of elements in array is " << my_array.getAverage() << endl;
    return 0;

}