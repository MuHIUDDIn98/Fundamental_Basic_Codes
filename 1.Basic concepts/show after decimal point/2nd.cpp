
/*showpoint
noshowpoint
setw()
fixed
setprecision()*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){

float num1;
float num2;
float sub;

float sum;
cout<<"Enter 1st number =";
cin>>num1;
cout<<"Enter 2nd number =";
cin>>num2;


cout<<showpoint;
cout<<fixed;
cout<<setprecision(10);

sum=num1+num2;



cout<<setw(34)<<"Addtion of two number is ="<<sum<<endl;

sub=num1-num2;
cout<<setw(35)<<"substraction of two number is = : "<<sub<<endl;


double mul=num1*num2;
cout<<noshowpoint;
cout<<setw(36)<<"Multiplication of two number is ="<<mul<<endl;


int div1=num1/num2;

cout<<setw(37)<<"Division of two number is ="<<div1<<endl;


float div=(float)num1/num2; // type custing
cout<<setw(38)<<"Division of two number is ="<<div<<endl;


//int mod=num1%num2;
//cout<<"Modulus of two number="<<mod<<endl;



return 0;
}
