/* Julio Quintero
 *     1
 *     dd/mm/yyyy
 * Lab1 4/9/2019
 */


#include <iostream>
#include <algorithm>
using namespace std;
// Functions
double averagef(double my_array[], int size);
double largest(double my_array[], int size);
double smallest(double my_array[], int size);

int main() {
    double my_array[5];
    cout<< "Enter 5 numbers" << "\n";
    // Filling the array
    for (int i =0 ; i<5; i++){
        cout << "Enter number " << i+1 <<": ";
        cin >> my_array[i];
    }
    // Printing average, largest and smallest number
    cout << "The average is: " << averagef(my_array,5) << endl;
    cout <<"The largest number in the array is: " << largest(my_array,5) << endl;
    cout <<"The smallest number in the array is: " << smallest(my_array,5) << endl;
    return 0;

}
double averagef(double my_array[], int size) // Calculating average
{
    double total = 0;
    double average = 0;

    for (int j = 0; j < 5; ++j) {
        total = total + my_array[j];
    }
    average = total/5;

    return average;
}

double largest(double my_array[], int size) // Finding the largest number
{
    int mx;
    mx=my_array[0];
    for(int i=0;i<size;i++)
    {
        if(mx<my_array[i])
        {
            mx = my_array[i];
        }
    }
    return mx;
}

double smallest(double my_array[], int size) // Finding the smallest number
{
    int mn;
    mn=my_array[0];
    for(int i=0;i<size;i++)
    {
        if(mn>my_array[i])
        {
            mn=my_array[i];
        }
    }
    return mn;
}




