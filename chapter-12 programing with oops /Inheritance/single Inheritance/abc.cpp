#include <iostream>
using namespace std;

class abc
{
public:
    int a;
    int b;
    int c;
};

class sum : public abc
{
public:
    // setter
    void setData()
    {
        cout << endl
             << "Enter value of A : ";
        cin >> a;
        cout << endl
             << "Enter value of B : ";
        cin >> b;
        cout << endl
             << "Enter value of B : ";
        cin >> c;
    };

    // getter
    void getData()
    {
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << endl
             << "Sum of cubes of A , B and C is : " << sum << endl;
    };
};