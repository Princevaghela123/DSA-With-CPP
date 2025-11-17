#include <iostream>
using namespace std;

int Quick_partition(vector<int> &a, int start, int end)
{

    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[j], a[i]);
        }
    }
    i++;
    swap(a[i], a[end]);
    return i;
}

void Quick_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {

        int pivIndex = Quick_partition(a, start, end);

        Quick_sort(a, start, pivIndex - 1); // Left
        Quick_sort(a, pivIndex + 1, end);   // right
    }
}

int main()
{

    int n;

    cout << "Enter Number of Elements: ";
    cin >> n;

    vector<int> a;

    cout << "Array input " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter Element of a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << "Array Output " << endl;
    for (int e : a)
    {
        cout << e << " ";
    }

    Quick_sort(a, 0, n - 1);

    cout << endl
         << " Sorted Array Output : " << endl;
    for (int e : a)
    {
        cout << e << " ";
    }
}