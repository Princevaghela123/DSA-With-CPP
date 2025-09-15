#include <iostream>
using namespace std;

int main()
{
    char a, b;

    cout << "Enter the first character :";
    cin >> a;
    cout << "Enter the second character :";
    cin >> b;

    while (a <= b)
        cout << a++ << endl;
}