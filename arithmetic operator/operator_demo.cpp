#include<iostream>
using namespace std;

int main(){

int num1;
int num2;
int sub;

int sum;
cout<<"Enter 1st number=";
cin>>num1;
cout<<"Enter 2nd number=";
cin>>num2;

sum=num1+num2;
cout<<"Addtion of two number="<<sum<<endl;

sub=num1-num2;
cout<<"substraction of two number="<<sub<<endl;

double mul=num1*num2;
cout<<"Multiplication of two number="<<mul<<endl;
double div=num1/num2;
cout<<"Division of two number"<<div<<endl;
div=(float)num1/num2; // type custing
cout<<"Division of two number"<<div<<endl;
int mod=num1%num2;
cout<<"Modulus of two number="<<mod<<endl;



return 0;
}
