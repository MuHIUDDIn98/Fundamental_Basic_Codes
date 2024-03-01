#include <bits/stdc++.h>
using namespace std;
void fun(int *p){    
    *p = 20;  //dereferencing 
    cout<<"*p :"<<*p<<endl;//addres of p located in func printing 
    cout<<"func called"<<endl;
    cout<<"address of p   :"<<&p<<endl; //different address..
}
int main(){
    int val = 10;
    int *ptr = &val;
    cout<<"val before :"<<val<<endl;
    cout<<"val before :"<<*ptr<<endl;
    fun(ptr);  //fun(&val)
    cout<<"address of ptr :"<<&ptr<<endl; //different address...
    cout<<"val after:"<<val<<endl;
    // cout <<"val after:" <<*ptr << endl;
    return 0;
}