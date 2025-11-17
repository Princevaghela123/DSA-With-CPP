#include <iostream>
using namespace std;

int binary_search(int a[], int n, int element)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (element < a[mid])
        {
            end = mid - 1;
        }
        else if (element > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{

    int n;
    cout << "Enter Size Of Array : ";
    cin >> n;

    vector<int> a;

    cout << endl
         << "Array Input : " << endl;

    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter Element Of a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << endl
         << "Array Output : " << endl;

    for (int element : a)
    {
        cout << element << " ";
    }

    int index = binary_search(a, n);

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
