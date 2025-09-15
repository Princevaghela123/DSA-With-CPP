#include <iostream>
using namespace std;
int main()
{
    int row, cols, max = 0;
    cout << "Enter Number of Rows := ";
    cin >> row;
    cout << "Enter Number of Cols := ";
    cin >> cols;

    // Array Input
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

    // Find Largest Value of Array Element
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < row; k++)
            {
                for (int l = 0; l < cols; l++)
                {

                    if (a[i][j] > a[k][l])
                    {
                        max = a[i][j];
                    }
                }
            }
        }
    }

    cout << endl
         << endl
         << "Maximum Element := " << max << endl;
}