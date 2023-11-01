#include<iostream>
using namespace std;
int main(){

int num,n;
cout<<"Enter your number:";
cin>>num;

cout<<"Enter your nth bit number: ";
cin>>n;
num=num|1<<(n-1);

cout<<"your changed nth bit number value :";
cout<<num;
return 0;

}


//enter num = 10 
//and  n =3 
//binary of 10 = 1010
//nth bit 3       0
//Number return =1110=14


