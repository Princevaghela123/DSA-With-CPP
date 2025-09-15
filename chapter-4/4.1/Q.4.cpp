#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cout << "Enmter the value of x and y : ";
    cin >> x >> y;

    int result = (x - y) * (x - y) * (x - y);
    cout << "The Result of (X-Y)^3 Is : " << result << endl;
}