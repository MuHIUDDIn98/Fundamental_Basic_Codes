#include<iostream>
using namespace std;
main(){

int a=32;

int c=a>>3;    // (100000)=32=(2^5);
cout<<c<<endl;

c=a<<3;         //(100000000)=256=(2^8);
cout<<c<<endl;



int x=~4;   //00000100 =4
cout<<x;    //11111011 =-5
}
