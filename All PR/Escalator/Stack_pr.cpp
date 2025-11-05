#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size; 
    int top;
    // int length;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        // this->length = 0;
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
            // length++;
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
            // length--;
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
    // void length_of_stack()
    // {
    //     cout << "Aa Stack " << length << "Atlo Lambo Che!.!" <<endl;
    // }
};
int main()
{
    int size, choice, element;

    cout << "Enter Size Of Stack : ";
    cin >> size;

    Stack stack(size);

    do
    {
        cout << "Press 1 To Push Element " << endl;
        cout << "Press 2 To Pop Element" << endl;
        cout << "Press 3 To Peek top Element" << endl;
        cout << "Press 4 To Display size" << endl;
        cout << "Press 5 To Check Stack Is Empty!" << endl;
        cout << "Press 6 To Check Stack Is Full" << endl;
        // cout << "Press 7 To Check Size(Length)" << endl;
        cout << "Press 0 To exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Enter element to push: ";
            cin >> element;
            stack.push(element);
            cout << endl;
            break;

        case 2:
            cout << endl;
            stack.pop();
            cout << endl;
            break;

        case 3:
            cout << endl;
            stack.peek();
            cout << endl;
            break;

        case 4:
            cout << endl;
            stack.display();
            cout << endl;
            break;

        case 5:
            cout << endl;
            stack.isEmpty();
            cout << endl;
            break;

        case 6:
            cout << endl;
            stack.isFull();
            cout << endl;
            break;

        // case 7:
        //     cout << endl;
        //     stack.length_of_stack();
        //     cout << endl;
        //     break;

        case 0:
            cout << endl;
            cout << "Exiting..." << endl;
            cout << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}