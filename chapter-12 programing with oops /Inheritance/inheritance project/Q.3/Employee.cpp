#include <iostream>
#include <string.h>
using namespace std;

class A
{
protected:
    // fields
    int id;
    char name[20];
    char role[20];
    int salary;
    double experience;
    char company_name[20];
    char address[20];
    char email[20];
    int contact;

public:
    // setter
    void setEmployeeData()
    {
        cout << "Enter Employee ID: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter Employee Name: ";
        gets(this->name);
        fflush(stdin);
        cout << "Enter Employee Role: ";
        gets(this->role);
    }
};

class B : public A
{
public:
    // setter
    void SetEmployeeData2()
    {
        cout << "Enter Employee salary: ";
        cin >> salary;
        cout << "Enter Employee Experience: ";
        cin >> experience;
    }
};

class C : public B
{
public:
    // setter
    void SetEmployeeData3()
    {
        fflush(stdin);
        cout << "Enter Employee Company_name: ";
        gets(this->company_name);
        cout << "Enter Employee Experience: ";
        cin >> experience;
    }
};

class D : public C
{
public:
    // setter
    void SetEmployeeData4()
    {
        fflush(stdin);
        cout << "Enter the Email : ";
        gets(this->email);
        cout << "Enter the contact : ";
        cin >> contact;
    }

    // getter
    void GetEmployeeData()
    {
        cout << endl
             << "Employee ID: " << this->id;
        cout << endl
             << "Employee Name: " << this->name;
        cout << endl
             << "Employee Role: " << this->role;
        cout << endl
             << "Employee Salary: " << this->salary;
        cout << endl
             << "Employee Experience: " << this->experience;
        cout << endl
             << "Employee Company_name: " << this->company_name;
        cout << endl
             << "Employee Email: " << this->email;
        cout << endl
             << "Employee Contact: " << this->contact;
    }
};