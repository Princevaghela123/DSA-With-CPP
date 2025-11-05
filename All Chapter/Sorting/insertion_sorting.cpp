#include<iostream>
using namespace std;

void insertion_sort(int[], int);

int main()
{
    int n;

    cout << "Enter size of Array : ";
    cin >> n;
    int a[n];

    // Input array elements
    cout << "Input Of Array";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter A[" << i << "] : ";
        cin >> a[i];
    }

    cout<<"Array Before Sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    insertion_sort(a, n);

}

void insertion_sort(int a[], int n){

    
}