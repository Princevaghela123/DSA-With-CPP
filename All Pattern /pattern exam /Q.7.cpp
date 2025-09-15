#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (
                (i == 1 || i == 3) || (j == 1) || ((i >= 1 && i <= 3) && j == 4))
            {
                cout << "P ";
            }
            else
            {
                cout << "    ";
            }
        }
        cout << endl;
    }
}