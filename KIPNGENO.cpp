#include<iostream>
using namespace std;
inline double calculate(double R1,double R2);
inline double calculate(double R1,double R2)
{
double answer;
answer=(3.142*R1*R1)-(3.142*R2*R2);
return answer;
}
main()
{
double rad1,rad2,answer;//local variables;
cout<<"Enter radius of bigger circle=";
cin>>rad1;
cout<<"Enter radius of smaller circle=";
cin>>rad2;
answer=calculate(rad1,rad2);//calling a function
cout<<"area="<<answer<<endl;
return 0;
}

