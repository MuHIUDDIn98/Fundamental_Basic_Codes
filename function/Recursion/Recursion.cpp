//A recursive function in C++ is a function that calls itself.

#include<iostream>
using namespace std;

int fact(int n){
if (n==1)
    return 1; //base case
else
    return n*fact(n-1);
}

main(){

int n;
cout<<"Enter your number :";
cin>>n;
int factorial=fact(n);
cout<<"factorial of "<<n<<"="<<factorial;
}
