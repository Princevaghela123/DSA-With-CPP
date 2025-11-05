#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int count;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

   void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is overflow...." << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->count++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
        }
    }

    void dequeue()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is underflow...." << endl;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        else
        {
            this->front++;
            this->count--;
        }
    }

    void get_front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Front : " << this->arr[this->front] << endl;
        }
    }

    void get_rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Rear : " << this->arr[this->rear] << endl;
        }
    }

    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl;
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    void isEmpty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not empty" << endl;
        }
    }

    void isFull()
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is full..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not full..." << endl;
        }
    }

    int size()
    {
        return this->count;
    }
};

int main()
{

    int size;

    cout << "Enter size of Queue: ";
    cin >> size;
    Queue queue(size);
    int choice;

    do
    {

        cout << "Press 1 For Enqueue Opretion" << endl;
        cout << "Press 2 For Dequeue Opretion" << endl;
        cout << "Press 3 For Front Opretion" << endl;
        cout << "Press 4 For Rear Opretion" << endl;
        cout << "Press 5 For Display Opretion" << endl;
        cout << "Press 6 For IsEmpty Opretion" << endl;
        cout << "Press 7 For IsFull Opretion" << endl;
        cout << "Press 8 For Size/Lenght Opretion" << endl;
        cout << "Press 0 For Exitt!!.." << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);
}