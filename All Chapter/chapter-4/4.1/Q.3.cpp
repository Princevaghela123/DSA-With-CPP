#include <iostream>
using namespace std;

int main()
{

    int x, y;

    cout << "Enter the value of x and y :";
    cin >> x >> y;

    int result = (x + y) * (x + y) * (x + y);
    cout << "The Result Of (X + Y)^3 is :" << result << endl;
}