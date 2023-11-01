#include<iostream>
using namespace std;
main(){

int a=32;

int c=a>>3;    // (100000)=32=(2^5);
cout<<"a=32 binery of a = (100000)=32 =(2^5)  c=a>>3"<<endl;
cout<<"Left shifted 3     (000100)=04 =(2^2)  c="<<c<<endl;


c=a<<3;         //(100000000)=256=(2^8);
cout<<"a=32 binery of a = (100000)=32 =(2^5)  c=a<<3"<<endl;
cout<<"Left shifted 3     (100000)=256=(2^8)  c="<<c<<endl;



int x=~4;   //00000100 =4 
cout<<x;    //11111011 =-5
}
