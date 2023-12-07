#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
    cout<<"address &p :"<<&p<<endl;
    p = NULL; //if we null p , ptr will be null.. both refer to the same address...
}
int main() {
    int val = 10;
    int *ptr = &val;

     cout<<"val: "<<val<<endl;
    fun(ptr);  
    cout <<"address &ptr :"<< &ptr << endl;
    cout<<" *ptr:"<<*ptr<<endl;
    return 0;
}
