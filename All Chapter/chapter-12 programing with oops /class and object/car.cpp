#include <iostream>
using namespace std;

class car
{
public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;
};

int main()
{

    car car1;
    car car2;
    car car3;
    car car4;

    cout << "Car1 Details Input : " << endl
         << endl;

    cout << "Enter Your Car I'd :";
    cin >> car1.car_id;
    cout << "Enter Your Car Company Name :";
    cin >> car1.car_company_name;
    cout << "Enter Your Car Color :";
    cin >> car1.car_color;
    cout << "Enter Your Car Model :";
    cin >> car1.car_model;
    cout << "Enter Your Car Release Year :";
    cin >> car1.car_release_year;

    cout << endl
         << endl
         << "Car2 Details Input : " << endl
         << endl;

    cout << "Enter Your Car I'd :";
    cin >> car2.car_id;
    cout << "Enter Your Car Company Name :";
    cin >> car2.car_company_name;
    cout << "Enter Your Car Color :";
    cin >> car2.car_color;
    cout << "Enter Your Car Model :";
    cin >> car2.car_model;
    cout << "Enter Your Car Release Year :";
    cin >> car2.car_release_year;

    cout << endl
         << endl
         << "Car3 Details Input : " << endl
         << endl;

    cout << "Enter Your Car I'd :";
    cin >> car3.car_id;
    cout << "Enter Your Car Company Name :";
    cin >> car3.car_company_name;
    cout << "Enter Your Car Color :";
    cin >> car3.car_color;
    cout << "Enter Your Car Model :";
    cin >> car3.car_model;
    cout << "Enter Your Car Release Year :";
    cin >> car3.car_release_year;

    cout << endl
         << endl
         << "Car4 Details Input : " << endl
         << endl;

    cout << "Enter Your Car I'd :";
    cin >> car4.car_id;
    cout << "Enter Your Car Company Name :";
    cin >> car4.car_company_name;
    cout << "Enter Your Car Color :";
    cin >> car4.car_color;
    cout << "Enter Your Car Model :";
    cin >> car4.car_model;
    cout << "Enter Your Car Release Year :";
    cin >> car4.car_release_year;

    cout << endl
         << endl
         << "Car1 Details Output : " << endl
         << endl;

    cout << "Car I'd :" << car1.car_id << endl;
    cout << "Car Company Name :" << car1.car_company_name << endl;
    cout << "Car Color :" << car1.car_color << endl;
    cout << "Car Model :" << car1.car_model << endl;
    cout << "Car Release Year :" << car1.car_release_year << endl;
    

    cout << endl
         << endl
         << "Car2 Details Output : " << endl
         << endl;   


    cout << "Car I'd :" << car2.car_id << endl; 
    cout << "Car Company Name :" << car2.car_company_name << endl;
    cout << "Car Color :" << car2.car_color << endl;
    cout << "Car Model :" << car2.car_model << endl;
    cout << "Car Release Year :" << car2.car_release_year << endl;


    cout << endl
         << endl
         << "Car3 Details Output : " << endl
         << endl;


    cout << "Car I'd :" << car3.car_id << endl;
    cout << "Car Company Name :" << car3.car_company_name << endl;
    cout << "Car Color :" << car3.car_color << endl;
    cout << "Car Model :" << car3.car_model << endl;
    cout << "Car Release Year :" << car3.car_release_year << endl;


    cout << endl
         << endl
         << "Car4 Details Output : " << endl
         << endl;


    cout << "Car I'd :" << car4.car_id << endl;
    cout << "Car Company Name :" << car4.car_company_name << endl;
    cout << "Car Color :" << car4.car_color << endl;
    cout << "Car Model :" << car4.car_model << endl;
    cout << "Car Release Year :" << car4.car_release_year << endl;
    


     
}