#include <iostream> 
using namespace std;

int main(){

    // write a program to find simple interest
    // formala : p * r * n / 100

    float p , r , n;

    cout << " Enter the value of Principal\t: ";
    cin >> p;
    cout<< " Enteer the value of Rate\t: ";  
    cin >> r;
    cout<< "ENTER the value of Number of Year\t: '";
    cin >> n;

    cout << "Simple Interest is : "<< p * r * n / 100 << endl;



}