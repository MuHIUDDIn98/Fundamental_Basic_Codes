#include<iostream>
using namespace std;

int main(){

int x=10;
int *p;//declaration

p=&x;//initialization

cout<<"x  : "<<x<<endl; //value of x
cout<<"&x : "<<&x<<endl; //address of x
cout<<"p  : "<<p<<endl;  // address of x and p is same 
cout<<"&p : "<<&p<<endl; // pointer variable address 
cout<<"*p : "<<*p<<endl; //dereferancing




}