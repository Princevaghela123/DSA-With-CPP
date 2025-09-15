#include <iostream>
using namespace std;

int main()
{
    float units, avg, total;
    cout << "ENTER YOUR UNITS :";
    cin >> units;

    if (units >= 0 && units <= 50)
    {
        float first = units * 0.5;
        avg = (first * 20) / 100;
        total = first + avg;
        cout << "YOUR TOTAL BILL IS : " << total << endl;
    }
    else if (units >= 51 && units <= 150)
    {
        float second = 25 + ((units - 50) * 0.75);
        avg = (second * 20) / 100;
        total = second + avg;
        cout << "YOUR TOTAL BILL IS : " << total << endl;
    }
    else if (units >= 151 && units <= 250)
    {
        float third = 75 + ((units - 150) * 1.2);
        avg = (third * 20) / 100;
        total = third + avg;
        cout << "YOUR TOTAL BILL IS : " << total << endl;
    }
    else if (units > 250)
    {
        float fourth = 220 + (units - 250) * 1.50;
        avg = (fourth * 20) / 100;
        total = fourth + avg;
        cout << total <<endl << avg ;
        cout << "YOUR TOTAL BILL IS : " << total << endl;
    }
    else
    {
        cout << "INVALID UNITS ENTERED!" << endl;
    }
}