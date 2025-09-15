#include <iostream>
using namespace std;

class BankAccount
{
    protected:
        int accountNumber;
        char accountHolderName[50];
        double balance;

    public: 

        BankAccount(int accNum, const char* accHolderName, double initialBalance)
        {
            accountNumber = accNum;
            strncpy(accountHolderName, accHolderName, sizeof(accountHolderName) - 1);
            accountHolderName[sizeof(accountHolderName) - 1] = '\0'; // Ensure null-termination
            balance = initialBalance;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: $" << amount << endl;
            }
            else
            {
                cout << "Deposit amount must be positive!" << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrew: $" << amount << endl;
            }
            else
            {
                cout << "Insufficient funds or invalid withdrawal amount!" << endl;
            }
        }

        void displayAccountInfo()
        {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Balance: $" << balance << endl;
        }

};
