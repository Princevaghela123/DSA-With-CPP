#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " IS A POSITIVE NUMBER..!" << endl;
    }

    else if (num < 0)
    {
        cout << num << " IS A NEGATIVE NUMBER..!" << endl;
    }
    else
    {
        cout << endl
             << num << " IS NEUTRAL NUMBER..!" << endl;
    }
}
