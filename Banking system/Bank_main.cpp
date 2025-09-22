#include <iostream>
#include "Banksystem.cpp"
using namespace std;

int main()
{
    int choice;
    CheckingAmount acc;

    acc.bankAccount();

    do
    {
        cout << endl
             << endl
             << " Press 1 for Check Bank Balance \n Press 2 for Deposite \n Press 3 for Withdrow \n Press 4 for Account Details" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            acc.getBalance();
            break;

        case 2:
            acc.deposit();
            break;

        case 3:
            acc.checkOverdraft();
            break;

        case 4:
            acc.getAccountInfo();
            break;

        default:
            cout << endl
                 << "Invalid Choice";
            break;
        }
    } while (choice != 0);

    return 0;
}