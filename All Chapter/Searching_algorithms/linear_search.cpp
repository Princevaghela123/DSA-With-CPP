#include <iostream>
using namespace std;

int searching_element(vector<int> &a, int n)
{
    int search_key;
    cout << endl
         << "Enter which Element You Search : ";
    cin >> search_key;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (search_key == a[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{

    int n;
    cout << "Enter Number Of Elements : ";
    cin >> n;

    vector<int> a;
    cout << endl
         << "Array Input : " << endl;

    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter Element a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << endl
         << "Array Output : " << endl;

    for (int element : a)
    {
        cout << element << " ";
    }

    int index = searching_element(a, n);

    if (index == -1)
    {
        cout << endl
             << "Searched Element Not Founded...";
    }
    else
    {
        cout << endl
             << "Searched Element Founded At Index : " << index;
    }
}