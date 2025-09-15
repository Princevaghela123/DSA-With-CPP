#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << endl
         << endl
         << "Enter the First Value := ";
    cin >> a;
    cout << "Enter the Second Value := ";
    cin >> b;
    cout << endl
         << "Addition of " << a << " + " << b << " = " << a + b;
}
int substraction(int a, int b)
{
    cout << endl
         << endl
         << "Enter the First Value := ";
    cin >> a;
    cout << "Enter the Second Value := ";
    cin >> b;
    cout << endl
         << "Substraction of " << a << " - " << b << " = " << a - b;
}
int multiplication(int a, int b)
{
    cout << endl
         << endl
         << "Enter the First Value := ";
    cin >> a;
    cout << "Enter the Second Value := ";
    cin >> b;
    cout << endl
         << "Multiplication of " << a << " * " << b << " = " << a * b;
}
int division(int a, int b)
{

    cout << endl
         << endl
         << "Enter the First Value := ";
    cin >> a;
    cout << "Enter the Second Value := ";
    cin >> b;
    cout << endl
         << "Division of " << a << " / " << b << " = " << a / b;
}
int modul(int a, int b)
{
    cout << endl
         << endl
         << "Enter the First Value := ";
    cin >> a;
    cout << "Enter the Second Value := ";
    cin >> b;
    cout << endl
         << "Modul of " << a << " % " << b << " = " << a % b;
}