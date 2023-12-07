#include<bits/stdc++.h>
using namespace std;

void func2(int *&p){
    cout<<"      address of p :"<<&p<<endl;
    *p = 400;
}

int main(){
    int val = 10;
    int *ptr=&val;
    cout<<"val :"<<val<<endl;
    cout<<"ptr address of val :"<<&ptr<<endl;
    func2(ptr);
    cout<<"val:"<<*ptr<<endl;


    return 0;
}