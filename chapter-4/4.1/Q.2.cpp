#include <iostream>
using namespace std;
int main()
{

    int x, y;
    cout << "Enter the Values of x and y:";
    cin >> x >> y;

    int result = (x - y) * (x - y);
    cout << "The Result of (X - Y)^2 is : " << result << endl;
}