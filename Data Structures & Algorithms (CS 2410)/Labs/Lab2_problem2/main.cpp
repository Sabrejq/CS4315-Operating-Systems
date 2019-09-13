// Julio Quintero
#include <iostream>
using namespace std;

void swap (float *number1, float *number2); // Funciton calling

int main() {
    // Variable declaration
    float first = 0;
    float second = 0;

    // Inputting values
    cout << "Enter first variable: ";
    cin >> first;

    cout << "Enter second variable: ";
    cin >> second;

     // Printing values
    cout << "The first variable is: " << first << endl;
    cout << "The second variable is: " << second<< endl;

    cout << "Now using swap" << endl;
    swap(&first,&second); // Passing by reference into the function

    // Results after using the function
    cout << "The new value for the first variable is: " << first << endl;
    cout << "The new value for the second variable is: " << second<< endl;
    return 0;
}

void swap (float *number1, float *number2) // Function Declaration
{
    // Swapping variables using pointers
    float x = *number1;
    *number1 = *number2;
    *number2 = x;
}
