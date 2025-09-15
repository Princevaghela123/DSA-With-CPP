#include <iostream>
using namespace std;

class A
{
protected:
    float celsius;
    float fahrenheit;
    float kelvin;
};

class B : public A
{
public:
    void setFahrenheit(float f)
    {
        fahrenheit = f;
        celsius = (f - 32) * 5 / 9;
    }

    void getFahrenheit()
    {
        cout << endl
             << "Fahrenheit: " << fahrenheit << endl
             << endl;
    }
};

class C : public B
{

public:
    void setkelvin()
    {
        kelvin = (f - 32) * 5 / 9 + 273.15;
    }

    void getKelvin()
    {
        cout << endl
             << "Kelvin: " << kelvin << endl
             << endl;
    }
};
