#include <iostream>
using namespace std;

// Linked List
class Node
{
public:
    int data;
    Node *Next;
    Node(int data)
    {
        this->data = data;
        this->Next = nullptr;
    }
};

class linkedList
{
public:
    Node *Head;
    int count;

    linkedList()
    {
        Head = nullptr;
        count = 0;
    }
    void addFromFirst(int data)
    {
        Node *newNode = new Node(data);
        newNode->Next = this->Head;
        this->Head = newNode;
        this->count++;
    }
    void updateData(int oldValue, int newValue)
    {
        Node *ptr = this->Head;
        int found = -1;

        while (ptr != nullptr)
        {
            if (ptr->data == oldValue)
            {
                ptr->data = newValue; // Update New Value
                found = 0;
                cout << "New Element Updated : " << newValue << endl;
            }
            ptr = ptr->Next;
        }
    }
    void fetchData()
    {
        Node *ptr = this->Head;
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->Next;
        }
    }
};

int main()
{
    linkedList l1;

    int choice, data, position, oldValue, newValue;

    do
    {
        cout << endl
             << endl;
        cout << "Press 1 For Add Data From First " << endl;
        cout << "Press 2 For Update Data " << endl;
        cout << "Press 3 For Fetch Data " << endl;
        cout << "Enter Choice : " << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter The Data For Add From First " << endl;
            cin >> data;
            l1.addFromFirst(data);
            break;
        case 2:
            cout << "Enter Old Data To Update " << endl;
            cin >> oldValue;
            cout << "Enter The New Value " << endl;
            cin >> newValue;
            l1.updateData(oldValue , newValue);
            break;
        case 3:
            cout << "Enter The Data For Add From First " << endl;
            l1.fetchData();
            break;

        case 0:
            cout<<"Exit"<<endl;

        default:
            cout<<"Invalid Input"<<endl;
            break;
    
        }
    }   while(choice !=0);

    return 0;
}
