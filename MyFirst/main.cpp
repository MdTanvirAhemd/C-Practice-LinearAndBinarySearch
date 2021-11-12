#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 2 Number";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c;

    string str;
    cout<<"May I know your name";
    getline(cin,str);
    cout<<"Hello "<<str;
    return 0;
}
