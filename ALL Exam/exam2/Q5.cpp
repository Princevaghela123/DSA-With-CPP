#include <iostream>
using namespace std;
int main()
{
    char a = 'a';
    do
    {
        cout << a << "\t";
        a += 4;
    } while (a < 'z');
}