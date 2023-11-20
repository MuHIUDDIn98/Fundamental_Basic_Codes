#include<iostream>
using namespace std;

int main()
{
// bitwise AND  &
// bitwise OR |
// bitwise NOT ~
//bitwise XOR ^

//Left shift <<
//right shift>>

int a=32;  //100000
int b=12;  //001100
           //-------
           //000000

int c=a&b;
cout<<"               a=32 100000"<<endl;
cout<<"               b=12 001100"<<endl;
cout<<"-----------------------------"<<endl;
cout<<"bitwise a & b   ="<<c<<"  000000"<<endl;



int e=32;  //100000
int f=12;  //001100
           //-------
           //101100        2^5+2^3+2^2=44
int d=e|f;
cout<<"               e=32 100000"<<endl;
cout<<"               f=12 001100"<<endl;
cout<<"-----------------------------"<<endl;
cout<<"bitwise e | f   ="<<d<<" 101100"<<endl;
cout<< "2^5+2^3+2^2 :"<<d<<endl;



int g=32;  //100000
int h=12;  //001100
           //-------
           //101100        32+8+4=44
int i=g^h;

cout<<"               g=32 100000"<<endl;
cout<<"               h=12 001100"<<endl;
cout<<"-----------------------------"<<endl;
cout<<"bitwise g ^ h   ="<<i<<" 101100"<<endl;
cout<< "2^5+2^3+2^2 :"<<i<<endl;
cout<< "bitwise g XOR h :"<<i<<endl;




return 0;
}
