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

    // sum of array elements

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    cout << endl
         << endl
         << "Sum of Array Elements : " << sum << endl;

    // average of array elements

    cout << endl
         << "Average of Array Elements : " << (float)sum / size << endl;
}