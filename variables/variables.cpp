#include<iostream>
using namespace std;

main(){
float d=34.44;
long double e=34.44;

cout<<"the value of d is="<<d<<" size= "<<sizeof(d)<<endl<<"The value of e is=" <<e<<" size= "<<sizeof(e)<<endl;

float r = 34.44f;
long double y = 34.44L;
cout<<"the value of r is="<<r<<" size = "<<sizeof(r)<<endl;
cout<<"The value of y is=" <<y<<" size = "<<sizeof(y)<<endl;

//================== address=====================
float x = 455;
float  &i =x;
cout<<"address of x = "<<&x<<endl;
cout<<"address of i = "<<&i<<endl;

cout<< "the value of x ="<<x<<endl;
cout<< "the value of i ="<<i<<endl;
cout<<"test"<<endl;

//================constant=================
const int a = 3;
cout<<"The value of a was :"<<a;
//a=4;
cout<<"the value of a is : "<<a;
return 0;
}
