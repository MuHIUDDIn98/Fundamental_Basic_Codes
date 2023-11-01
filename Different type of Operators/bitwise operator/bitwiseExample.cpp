#include<iostream>
using namespace std;

main()
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

cout<<"bitwise a and b :"<<c<<endl;



int e=32;  //100000
int f=12;  //001100
           //-------
           //101100        32+8+4=44
int d=e|f;

cout<< "bitwise e OR  f :"<<d<<endl;



int g=32;  //100000
int h=12;  //001100
           //-------
           //101100        32+8+4=44
int i=g^h;

cout<< "bitwise g XOR h :"<<i<<endl;




return 0;
}