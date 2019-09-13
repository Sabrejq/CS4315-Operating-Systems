/* Team 12
 * Dang Dung & Julio Quintero
 *  09/09/2018
 * dd/mm/yyy
 */
#include <iostream>
using namespace std;
int main ()
{
    // Variables
    const int num_of_employees = 7;
    int long empId[num_of_employees]= {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[num_of_employees];
    double payRate[num_of_employees];
    double wages[num_of_employees];
    cout<< "Enter the hours worked by 7 employees and their hourly pay rates.\n";
    //Main loop
    for (int count = 0;count < num_of_employees;count++)
    {
        // Inputting hours of each employee
        cout<< "Hours worked by employee #"<<empId[count]<< ":";
        cin>> hours[count];
        // Check for negative numbers
        while (count < 0)
        {
            cout<<"Please enter a positive number: ";
            cin>> hours[count];
        }
        // Inputting hourly rate, wage, per employee
        cout<< "Hourly pay rate for employee #"<<empId[count]<<":";
        cin>> payRate[count];
        // Check for pay rate less than zero
        while (payRate[count] < 15.00)
        {
            cout<< "Please enter a pay rate higher than $6.00: ";
            cin>> payRate[count];
        }
    }
            // Small spacing between outputs
            cout << "\n";
    // Printing all outputs
    for (auto count = 0; count < num_of_employees; count++)
    {
        wages[count]= hours[count] * payRate[count];
        cout<< "Employee #"<<empId[count]<<" made: $"<<wages[count]<< endl;
        cout << "\n";
    }
    return 0;
}