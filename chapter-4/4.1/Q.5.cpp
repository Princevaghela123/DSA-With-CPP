#include <iostream>
using namespace std;

int main()
{

    int x, y, z;

    cout << "Enter The Value Of X, Y, And Z :";
    cin >> x >> y >> z;

    int result = (x + y + z) * (x + y + z);
    cout << "The Result Of (x+y+z)^2 Is : " << result << endl;
}