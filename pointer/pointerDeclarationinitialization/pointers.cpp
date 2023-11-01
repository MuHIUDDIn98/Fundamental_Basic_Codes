#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int x=10;
int *p;//declaration in order to hold the value of integer variable we need to create a interger pointer 

p=&x;//initialization  put address of x into  pointer variable p

cout<<"x  : "<<x<<endl; //value of x
cout<<"&x : "<<&x<<endl; //address of x
cout<<"p  : "<<p<<endl;  // address of x and p is same 
cout<<"&p : "<<&p<<endl; // pointer variables address 
cout<<"*p : "<<*p<<endl; //dereferancing the value of x

int y=100;
int *k=&y;

printf(" &y        :%d\n",&y);
printf(" &y        :%p\n",&y);
printf(" k or &y   :%p\n",k);
printf(" &k        :%p\n",&k);
printf(" y or *k   :%d\n",*k); //dereferancing k to y
*k = 500;//accessing value of y using pointer *k and chage it to 500
printf(" y or *k   :%d\n",y); //dereferancing k to y
printf(" y or *k   :%d\n",*k); //dereferancing k to y





}