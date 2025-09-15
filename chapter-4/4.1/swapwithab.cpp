#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter you value of a and b :";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A :" << a << endl
         << "B :" << b << endl;
}