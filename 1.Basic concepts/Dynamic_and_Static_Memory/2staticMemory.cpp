#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){

    int x = 10;
    p=&x;

    cout<<"Value of x ->>"<<*p<< " x-->"<<x<<endl;

}


int main(){
    fun();
    cout<<"pointed variable in stack memeory :"<<*p<<endl;


    return 0;
}
