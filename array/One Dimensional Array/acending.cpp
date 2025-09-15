#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter the Size of Array Elements : ";
    cin >> size;

    int a[size];

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
         << "Acending Order of Array Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    // print Acending order

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}