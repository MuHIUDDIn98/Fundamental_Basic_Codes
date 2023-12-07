#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int x[5]={11,22,33,44,55};
int *p;

p=&x[0]; //p = x;  (referencing..)

cout<<p<<endl;
cout<<&x[0]<<endl;
for(int i=0; i<5; i++){

    cout<<p[i]<<endl; //printing content of array x element.
}

for(int i=0; i<5; i++){

    p[i]=i;
}

for(int i=0; i<5; i++){

    cout<<p[i]<<endl; //printing content of array x element.
}







return 0;
}