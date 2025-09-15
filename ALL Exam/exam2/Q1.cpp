#include <iostream>
using namespace std;

int main()
{
    int n, a = 1, j = 1;
    cout << "Enter the Number :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        a = a + j;
        j++;
    }
}