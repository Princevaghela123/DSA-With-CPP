#include <iostream>
using namespace std;

int getCubeValue(int *n)
{
    return (*n) * (*n) * (*n);
}

int main()
{
    int size,row,col;
    cout << "Enter the size of Rows := ";
    cin >> row;
    cout << "Enter the size of Columns := ";
    cin >> col;

    int arr[row][col];

    cout << "Enter array of elements :";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*(arr + i) + j);
        }
    }

    cout << "cube of all elements :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << getCubeValue(&arr[i][j]) << "  ";
        }
        cout << endl;
    }

    return 0;
}