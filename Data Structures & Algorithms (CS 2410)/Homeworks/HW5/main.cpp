/*
 * Julio Quintero & Dung Dang
 * Homework 5 CS2410
 */

#include <iostream>
#include "SavingsAccount.h"
using namespace std;
int main() {

    // I made an array of months to clearly show the change in interest rate from one moth to another
    string months[]={"January's","February's","March's", "April's","May's", "June's",
                     "July's","August's","September's","October's","November's","December's"};

    // A simple Loop and user input that goes with the array above just for the sake of showing the change in rate
    int input = 0;
    cout << "How many months do you want the interest for? A max of 11" <<endl;
    cin >> input;

    while(input <= 0 || input > 11){
        cout << "Do not input values below 0 or above 12"<< endl;
        cout << "Type a month:" << endl;
        cin >> input;
    }

    // Creating the accounts objects
    SavingsAccount saver1(2000);
    SavingsAccount saver2(3000);

    // Outputs and formatting
    cout << "\t\tSaver 1\t\t\t\t\t\tServer 2"<<"\n";
    cout << "\t\tBalance:\t\t\t\t\tBalance:"<< "\n";
    cout.width(14);
    cout << "\t"<<saver1.getBalance() << "\t\t\t\t\t\t" << saver2.getBalance() << endl;
    cout << "\n";

    // A little division for style
    cout <<"*************************************************************************" << "\n";
    cout <<"Interest at 3%" << "\n";
    cout << "\t\tSaver 1\t\t\t\t\tServer 2"<<"\n";
    cout << "\t\tBalance:\t\t\t\tBalance:"<< "\n";


    // First Loop that calculates interest at 3% and prints balances
    for (int i = 0; i < input; i++) {
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();
        cout.width(16);
        cout << months[i] << " interest: " << saver1.getBalance() << "\t\t\t" << months[i] << " interest: " << saver2.getBalance() << "\n";
    }

    // A little division for style
    cout << "\n";
    cout <<"*************************************************************************" << "\n";

    // From here this part of the code is similar to the beginning, but with 4% interest now
    cout.width(15);
    cout << "Saver 1\t\t\t\tServer 2\n\tBalance:\t\t\tBalance: "<<endl;
    cout.width(16);
    cout << saver1.getBalance() << "\t\t\t " << saver2.getBalance() << "\n";
    cout << "\n";
    cout <<"*************************************************************************" << "\n";

    // Changing interest to 4%
    SavingsAccount::modifyInterestRate(0.04);

    // formatting and outputs
    cout <<"Interest at 4%" << "\n";
    cout << "\t\tSaver 1\t\t\t\t\t\tServer 2"<<"\n";
    cout << "\t\tBalance:\t\t\t\t\tBalance:"<< "\n";

    for (int i = input; i < input+1; i++) {
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();
        cout.width(16);
        cout << months[i] << " interest: " << saver1.getBalance() << "\t\t\t" << months[i] << " interest: " << saver2.getBalance() << "\n";
    }

    return 0;
}