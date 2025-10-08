#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size; 
    int top;
    int length;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->length = 0;
    }
    ~Stack()
    {
        delete[] arr;
    }


    //Push Method 
    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack Bharay Gyu Bhai!!!" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
            length++;
            cout << element << " Succesfully Pushed!!" << endl;
        }
    }
    //Pop Method
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Ma Kai Nathi Bhai!?.." << endl;
        }
        else
        {   
            top--;
            cout << arr[top] << " Successfully Popped From Stack!!.." << endl;
            length--;
        }
    }

    //Peek Method
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack Ma Elements Nakho!!.." << endl;
        }
        else
        {
            cout<< arr[top] <<" Is Peeked!! "<< endl;
        }
    }

    //Display Method
    void display()
    {
        if (top == -1)
        {
            cout << "Stack MA Elements Nakho!!.." << endl;
        }
        else
        {
            cout << "Displayed From Stack : ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // isEmpty Method
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack Ma Kai Nathi Bhai!././." << endl;
        }
        else
        {
            cout << "Stack Bhairu Che Bhai!!././." << endl;
        }
    }

    // isFull Method
    void isFull()
    {
        if (top == size - 1)
        {
            cout << "Stack Akhu Bhairu Che!!././" << endl;
        }
        else
        {
            cout << "Stack Akhu Nathi Bhairu!!./." << endl;
        }
    }

    // Length Method
    void length_of_stack()
    {
        cout << "Aa Stack " << length << "Atlo Lambo Che!.!" <<endl;
    }
};