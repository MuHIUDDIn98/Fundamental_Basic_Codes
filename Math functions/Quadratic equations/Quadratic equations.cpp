#include<iostream>
#include<math.h>
using namespace std;

main(){
double a,b,c,d,x1,x2;


cout<<"Enter a=";
cin>>a;
cout<<" ";
cout<<"Enter b=";
cin>>b;
cout<<" ";
cout<<"Enter c=";
cin>>c;

d=sqrt(b*b-4*a*c);

x1=(-b+d)/2*a;
x2=(-b-d)/2*a;

cout<<"x1="<<x1<<"     x2="<<x2<<endl;

}
