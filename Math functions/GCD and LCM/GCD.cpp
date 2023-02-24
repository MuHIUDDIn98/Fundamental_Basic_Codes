#include<iostream>
using namespace std;

main(){
int num1,num2;

cout<<"Enter your 1st number:";
cin>>num1;
cout<<"Enter your 2nd numbder:";
cin>>num2;


int n1=num1;
int n2=num2;

while(n2!=0){

    int rem=n1%n2;
    n1=n2;
    n2=rem;
}
int gcd=n1;

cout<<"Gcd:"<<gcd<<endl;
int lcm=(num1*num2)/gcd;

cout<<"LCM:"<<lcm;
}
