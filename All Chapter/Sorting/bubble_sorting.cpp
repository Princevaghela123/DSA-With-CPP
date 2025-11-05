#include <iostream>
using namespace std;

void bubble_sort(int[], int);

int main()
{
    int size;

    cout << "Enter size of Array : ";
    cin >> size;
    int a[size];

    // Input array elements
    cout << "Input Of Array";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter A[" << i << "] : ";
        cin >> a[i];
    }

    cout<<"Array Before Sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    bubble_sort(a, size);

}

void bubble_sort(int a[], int size){

    
}