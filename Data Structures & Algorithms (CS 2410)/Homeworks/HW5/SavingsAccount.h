#ifndef HW5_SAVINGSACCOUNT_H
#define HW5_SAVINGSACCOUNT_H


class SavingsAccount {

public:
    explicit SavingsAccount(int savings);
    void calculateMonthlyInterest();
    static void modifyInterestRate(float interest);
    float getBalance();
    ~SavingsAccount();

private:
    static float annualInterestRate;
    float savingsBalance;
};

#endif //HW5_SAVINGSACCOUNT_H
