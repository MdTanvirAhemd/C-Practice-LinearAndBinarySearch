
/*#include <iostream>
#include <math.h>


using namespace std;

typedef int marks;

int main()
{
   // int a,b,c;
   // float root1,root2;
  //  cout<<"Enter 3 values";
  //  cin>>a>>b>>c;
   // root1= (-b+sqrt(b*b-4*a*c))/(2*a);
   // root2= (-b-sqrt(b*b-4*a*c))/(2*a);

 //   cout <<root1<< "    "<<root2<< endl;
//     cout<<"Enter 2345 values";

    marks m1,m2;

    m1=50;
    m2=90;
    cout <<m1<< "    "<<m2<< endl;

    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
float basic;
float percentAllow;
float percentDeduct;
float netSalary;
cout<<"Enter Basic Salary:";
cin>>basic;
cout<<"Enter percent of Allowences:";
cin>>percentAllow;
cout<<"Enter percent of Deductions:";
cin>>percentDeduct;
netSalary=basic+basic*percentAllow/100-
basic*percentDeduct/100;
cout<<"Net Salary is:"<<netSalary<<endl;
}
