#include <iostream>
using namespace std;

int main() {
 int num, ans;

    cout << "Enter the number: ";
    cin>>num;

    ans = num % 10;
    
    while (num >= 10) {
        num = num / 10; 
    }

    
    cout<<"The sum of first and last digit is: " << (ans + num) << endl;

    return 0;
}
