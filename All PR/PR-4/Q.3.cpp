#include <iostream>
using namespace std;
int main()
{
    int row, cols;
    cout << "Enter Number of Rows := ";
    cin >> row;
    cout << "Enter Number of Cols := ";
    cin >> cols;

    // taking array value
    int a[row][cols];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the Value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // printing original array
    cout << "Original Array := " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    // printing transpose array
    cout << "Transpose Array := " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[j][i] << "  ";
        }
        cout << endl;
    }

    return 0;
}