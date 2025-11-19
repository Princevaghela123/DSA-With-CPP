#include <iostream>
using namespace std;

// methiod of sorting array elements
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int swap = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = swap;
    }
}

// linear search
int searching_element(int arr[], int n)
{
    int search_key;
    cout << endl
         << "Enter which Element You Search : ";
    cin >> search_key;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (search_key == arr[i])
        {
            index = i;
                }
    }
    return index;
}

int main()
{
    int n;

    cout << "Enter the Number of Array := ";
    cin >> n;

    // taking array input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Value of a[" << i << "] := ";
        cin >> arr[i];
    }

    // printitng original array
    cout << " Array Output := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    // printitng updated array
    cout << endl
         << " Array After Sorted := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int index = searching_element(arr, n);

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

    return 0;
}
