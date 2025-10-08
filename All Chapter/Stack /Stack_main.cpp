#include "Stack.cpp"
#include <iostream>
using namespace std;
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
        cout << "Press 7 To Check Size(Length)" << endl;
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

        case 7:
            cout << endl;
            stack.length_of_stack();
            cout << endl;
            break;

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