#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter the value of A ,B ,And C :";
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << "A IS Minimum Number" << endl;
        }
        else
        {
            cout << "C Is Minimum Number" << endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << "B Is Minimum Number " << endl;
        }
        else
        {
            cout << "C Is Minimum Number " << endl;
        }
    }
}
