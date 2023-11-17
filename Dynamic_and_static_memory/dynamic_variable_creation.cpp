#include<bits/stdc++.h>
using namespace std;
int * fun(){

    int *b = new int;
    cout<<"fun :" << b <<endl;
    *b = 5000;
    return  b;
}
int main(){
    int x=10;//static 4byte memory assiging integer 10
    int *p = new int; //heap memory created in heap and pointer to p (address)
    float *f = new float;
    *f=34.564;
    *p=200; //assigning heap memory 200 dereferencing by *p =200
    cout<<"address of heap memory variable  :"<<p<<" printing content of heap using pointer :"<<*p<<endl;
    cout<<"address of heap memory variable  :"<<f<<" printing content of heap using pointer :"<<*f<<endl;
    int *i= fun();   //address return to main fun
    cout<< "main : "<<i<<endl; 

}