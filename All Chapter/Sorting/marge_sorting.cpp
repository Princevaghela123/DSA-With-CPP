#include <iostream>
using namespace std;

void marge(vector<int> &a, int start, int mid, int end)
{

    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
        while (i <= mid)
        {
            temp.push_back(a[i]);
            i++;
            while (j <= end)
            {
                temp.push_back(a[j]);
                j++;
            }
            for (int i = 0; i < temp.size(); i++)
            {
                a[i + start] = temp[i];
            }
        }
    }
}

void marge_sort(vector<int> &a, int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;

        marge_sort(a, start, mid);
        marge_sort(a, mid + 1, end);

        marge(a, start, mid, end);
    }
}

int main()
{

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter element a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << endl <<"Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    marge_sort(a, 0, n - 1);

    cout << endl
         << "Sorted array is : " ;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}