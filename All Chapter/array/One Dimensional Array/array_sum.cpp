#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the Size of Array Elements : ";
    cin >> size;

    int a[size]; // Dynamic array declaration

    cout << endl
         << endl
         << "Array Input" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] :";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "Array Output" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }

    cout << endl
         << endl
         << "2 Array Input" << endl;

    int b[size]; // Dynamic array declaration

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] :";
        cin >> b[i];
    }

    cout << endl
         << endl
         << "2 Array Output" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }

    int sum[size];

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    cout << endl
         << endl
         << " Sum Array Output" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << sum[i] <<endl;;
    }
}