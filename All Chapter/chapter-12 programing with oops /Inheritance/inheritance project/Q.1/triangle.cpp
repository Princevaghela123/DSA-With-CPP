#include <iostream>
using namespace std;

class size
{
protected:
    int hieght, width;

public:
    // constractor
    size()
    {
        cout << "Enter Hieght : ";
        cin >> hieght;
        cout << "Enter Width : ";
        cin >> width;
    }
};

class triangle : public size
{
public:
    // function to calculate area of triangle
    void gettriangleformula()
    {
        double area = 0.5 * hieght * width;
        cout << "Area of triangle is : " << area << endl;
    }
};

class rectangle : public size
{
public:
    // function to calculate area of rectangle
    void getrectangleformula()
    {
        double area = hieght * width;
        cout << "Area of Rectangle is : " << area << endl;
    }
};