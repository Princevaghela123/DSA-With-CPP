#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout << "Defualt" << endl;
    vector<int> v1;

    cout << endl <<endl <<"Paramaterized" << endl;
    vector<int> v2(5,12);

    cout << v2[0] <<endl;
    cout << v2[1] <<endl;
    cout << v2[2] <<endl;
    cout << v2[3] <<endl;
    cout << v2[4] <<endl;

    cout << endl <<endl <<"Initializer List" << endl;
    vector<int> v3{1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << endl;
    }
    
    return 0;
}

