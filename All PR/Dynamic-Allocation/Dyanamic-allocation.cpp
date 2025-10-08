#include <iostream>
using namespace std;

class Dynamic
{
    struct node
    {
        int data;
        node *next;
        node(int v)
        {
            data = v;
            next = NULL;
        }
    };
    node *head;

public:
    Dynamic()
    {
        head = NULL;
    }

    void addEnd(int value)
    {
        node *next = new node(value);
        if (head == NULL)
        {
            head = next;
            return;
        }
        node *t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = next;
    }

    void insert_at_beginning(int value)
    {
        node *n = new node(value);
        n->next = head;
        head = n;
    }

    bool Search(int k)
    {
        node *t = head;
        while (t != NULL)
        {
            if (t->data == k)
            {
                cout << k << " found\n";
                return true;
            }
            t = t->next;
        }
        cout << k << " not found\n";
        return false;
    }

    void Delete_node(int k)
    {
        if (head == NULL)
            return;
        if (head->data == k)
        {
            node *d = head;
            head = head->next;
            delete d;
            cout << k << " deleted\n";
            return;
        }
        node *t = head;
        while (t->next != NULL && t->next->data != k)
            t = t->next;
        if (t->next == NULL)
        {
            cout << k << " not in list\n";
            return;
        }
        node *d = t->next;
        t->next = t->next->next;
        delete d;
        cout << k << " deleted\n";
    }

    void reverse()
    {
        node *p = NULL;
        node *c = head;
        node *n = NULL;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
        cout << "List reversed\n";
    }

    void show()
    {
        if (head == NULL)
        {
            cout << "Empty list\n";
            return;
        }
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << " -> ";
            t = t->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    Dynamic l1;
    int ch;
    int value;
    do
    {
        cout << "Press 1 for  Add at End" << endl;
        cout << "Press 2 for Insert at Beginning" << endl;
        cout << "Press 3 for Search" << endl;
        cout << "Press 4 for Delete Node" << endl;
        cout << "Press 5 for Reverse" << endl;
        cout << "Press 6 for Display All Nodes" << endl;
        cout << "Press 0 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            l1.addEnd(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            l1.insert_at_beginning(value);
            break;
        case 3:
            cout << "Enter value: ";
            cin >> value;
            l1.Search(value);
            break;
        case 4:
            cout << "Enter value: ";
            cin >> value;
            l1.Delete_node(value);
            break;
        case 5:
            l1.reverse();
            break;
        case 6:
            l1.show();
            break;
        case 0:
            cout << "Exit"<<endl;
            break;
        default:
            cout << "Invalid choice";
        }
    } while (ch != 0);
}
