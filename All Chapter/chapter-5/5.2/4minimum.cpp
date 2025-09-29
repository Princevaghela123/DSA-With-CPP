#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter the value of A , B , C ,And D :";
    cin >> a >> b >> c >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "A Is Maximum Number";
            }
            else
            {
                cout << "D Is Maximum Number";
            }
        }
        else
        {
            if (c > d)
            {
                cout << "C Is Maximum Number";
            }
            else
            {
                cout << "D Is Maximum Number";
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                cout << "B Is Maximum Number";
            }
            else
            {
                cout << "D Is Maximum Number";
            }
        }
        else
        {
            if (c > d)
            {
                cout << "C Is Maximum Number";
            }
            else
            {
                cout << "D IS Maximum Number";
            }
        }
    }
}