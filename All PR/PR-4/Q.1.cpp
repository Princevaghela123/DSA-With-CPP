#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of array element : ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << "\t";
        }
        else
        {
            cout << " ";
        }
    }
}