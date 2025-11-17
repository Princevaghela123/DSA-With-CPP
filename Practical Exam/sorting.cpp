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
//For Binary Search
int Binary_Search(vector<int> &a, int n, int element)
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
    cout<<""<<endl;
    int element;

    // Search Element
    cout << "Enter the element to be searched := ";
    cin >> element;

    // Give Index Of Search Element Found
    int result = Binary_Search(a, n, element);
    cout << endl;
    if (result == -1)
    {
        cout << "Element not found in the array" << endl;
    }
    else
    {
        cout << "Element found at index " << result<< endl;
    }
}