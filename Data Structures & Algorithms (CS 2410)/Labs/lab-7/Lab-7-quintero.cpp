#include <iostream>
#include <algorithm>
using namespace std;

template <class num_two>
num_two minimum(num_two a,num_two b)
{
    if(a<b)
        return a;
    else
        return b;
}

bool isInteger(string num){

    {
       if( num.find('.') == -1)
           return true;
       else
           return false;

    }



}

int main()

{
    string inputOne,inputTwo;

    double num = 0;


cout << "Enter first integer"<<"\n";
cin >> inputOne;

        if (isInteger(inputOne)) {
            while (stoi(inputOne) < 0) {
                try {
                    if (stoi(inputOne) < 0) {
                        throw "Inputs cannot be negatives";
                    }
                }
                catch (const char *exception) {
                    cerr << "Input cannot be negative,\nInput again: ";
                    cin >> inputOne;

                }
            }
        }
        else
        {
            while (stof(inputOne) < 0) {
                try {
                    if (stof(inputOne) < 0) {
                        throw "Inputs cannot be negatives";
                    }
                }
                catch (const char *exception) {
                    cerr << "Input cannot be negative,\nInput again: ";
                    cin >> inputOne;

                }
            }
        }

cout << "Enter second integer"<<"\n";
cin>> inputTwo;
    if (isInteger(inputTwo)) {
        while (stoi(inputTwo) < 0) {
            try {
                if (stoi(inputTwo) < 0) {
                    throw "Inputs cannot be negatives";
                }
            }
            catch (const char *exception) {
                cerr << "Input cannot be negative,\nInput again: ";
                cin >> inputTwo;

            }
        }
    }
    else
    {
        while (stof(inputTwo) < 0) {
            try {
                if (stof(inputTwo) < 0) {
                    throw "Inputs cannot be negatives";
                }
            }
            catch (const char *exception) {
                cerr << "Input cannot be negative,\nInput again: ";
                cin >> inputTwo;

            }
        }
    }

cout << "the lesser number is: " << minimum(inputOne,inputTwo) <<"\n";



    return 0;

}