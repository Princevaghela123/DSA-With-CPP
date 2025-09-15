// Write a Program to find the formula's answer (x+y)^2.
#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cout << "Enter The Value of X and Y : ";
    cin >> x >> y;

    int result = (x + y) * (x + y);
    cout << "The Result of (X + Y)^2 is : " << result << endl;
}