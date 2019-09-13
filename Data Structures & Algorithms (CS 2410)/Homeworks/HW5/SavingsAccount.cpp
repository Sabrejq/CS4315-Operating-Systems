#include "SavingsAccount.h"

// Constructor to set the amounts into the accounts
SavingsAccount :: SavingsAccount(int savings) { savingsBalance = savings;}

// The annual interest starts at 3% until modifyInterestRate is used
float SavingsAccount::annualInterestRate = 0.03;

// Calculate Interest for the accounts
void SavingsAccount::calculateMonthlyInterest() {
    savingsBalance = savingsBalance + (savingsBalance*annualInterestRate/12);
}

// Getter
float SavingsAccount::getBalance() { return savingsBalance;}

// To modify the static value of interest
void SavingsAccount::modifyInterestRate(float interest) {
    annualInterestRate = interest;}


// I learned that I can set uo a default destructor like this
SavingsAccount::~SavingsAccount() = default;