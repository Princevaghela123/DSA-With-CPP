#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the Size of Array Elements : ";
    cin >> size;

    int a[size];
    cout << endl
         << "Array input" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] :";
        cin >> a[i];
    }

    cout << endl
         << endl
         << system("cls");

    cout << endl
         << "Crud Opretion" << endl;

    cout<<"Press 1 for Insert" << endl;
    cout<<"Press 2 for Push" << endl;
    cout<<"Press 3 for Fetch" << endl;
    cout<<"Press 4 for Update" << endl;
    cout<<"Press 5 for Delete" << endl;
    cout<<"Press 6 for Pop" << endl;
    cout<<"Press 0 for Exit" << endl;


}