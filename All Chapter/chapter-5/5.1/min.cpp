#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b :";
    cin >> a >> b;
    if (a < b)
    {
        cout << "A Is Minimum :" << a << endl;
    }
    else
    {
        cout << "B Is Minimum :" << b << endl;
    }
}