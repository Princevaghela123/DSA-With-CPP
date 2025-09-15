#include <iostream>
#include "function.cpp"
using namespace std;
int main()
{
    int choice, a, b;

    do
    {
        cout << endl
             << endl
             << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            sum(a, b);
            break;

        case 2:
            substraction(a, b);
            break;

        case 3:
            multiplication(a, b);
            break;

        case 4:
            division(a, b);
            break;

        case 5:
            modul(a, b);
            break;

        case 0:
            
            cout << "Exit";
            break;

        default:
            system("cls");
            cout << "Invalid Choice";
            break;
        }
        
    } while (choice != 0);
    
    return 0;
}