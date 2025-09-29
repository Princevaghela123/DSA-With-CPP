#include <iostream>
using namespace std;

class Operation
{
public:
    void calculator(int a, int b)
    {
        cout << a << " / " << b << " = " << (a / b) << endl;
    };

    void calculator(int a, int b, int c)
    {
        cout << a << " - " << b << " - " << c << " = " << (a - b - c) << endl;
    };

    void calculator(int a, int b, int c, int d)
    {
        cout << a << " * " << b << " * " << c << " * " << d << " = " << (a * b * c * d) << endl;
    };

    void calculator(int a, int b, int c, int d, int e)
    {
        cout << a << " + " << b << " + " << c << " + " << d << " + " << e << " = " << (a + b + c + d + e) << endl;
    };
};