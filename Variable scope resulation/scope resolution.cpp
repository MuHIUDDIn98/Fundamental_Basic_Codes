#include<iostream>
using namespace std;
int c=400;
main(){

int a, b, c;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
c=a+b;
cout<<"sum of the values (a + b) :"<<c<<endl;
cout<<"The global Variable C is "<<::c;
}
