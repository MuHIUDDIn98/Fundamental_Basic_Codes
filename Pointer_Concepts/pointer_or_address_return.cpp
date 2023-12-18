#include<bits/stdc++.h>
using namespace std;
int * fun(){

    int *b = new int;
    cout<<"fun :" << b <<endl;
    *b = 5000;
    cout<<"content of b :" << *b <<endl;
    return  b;
}

int main(){

    int *i= fun();   //address return to main fun
    cout<< "main : "<<i<<endl; 
    cout<<"content of heap momory  : "<<*i;

return 0;
}