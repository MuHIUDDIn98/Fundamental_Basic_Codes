#include<iostream>
using namespace std;


int max(int x,int y,int c){
            //if  else if    else
return x>y && x>c ?x :y>c ?y :c; 

}

int main(){

int d=max(10,20,30);
cout<<"Max :"<<d;

}