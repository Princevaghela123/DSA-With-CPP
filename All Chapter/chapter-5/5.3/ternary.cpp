#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int max;

    cout << "enter the value of A , B <and C :";
    cin >> a >> b >> c;

    max = (a > b)
              ? ((a > c)
                     ? a
                     : c)
              : ((b > c)
                     ? b
                     : c);

    cout<<"maximum number :"<<max<<endl;

}
