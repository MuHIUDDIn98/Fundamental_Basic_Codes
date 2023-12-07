#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

main()
{
//6 assignment operator:
//1.y=x+z
//2.x+=y  x=x+y
//3/x-=y  x=x-y
//4.x*=y  x=x*y
//5.x/=y  x=x/y
//6.x%=y  x=x%y

int x=5;
int y=2;


cout<<"x="<<x<<" and  "<<"y="<<y<<endl;
x+=y;
cout<<"x+=y or x=x+y: ";
cout<<x<<endl;

x-=y;
cout<<"x-=y or x=x-y: ";
cout<<x<<endl;

x*=y;
cout<<"x*=y or x=x*y: ";
cout<<x<<endl;

x%=y;
cout<<"x%=y or x=x%y:";
cout<<x<<endl;

int r=10,z=3;
r%=z;
cout<<"r%=z or r=r%z: "<<r<<endl;


float f=35;
float w=3;
cout<<showpoint;
cout<<setprecision(20);


f/=w;
cout<<"f/=w or f=f/w : "<<f;

}


