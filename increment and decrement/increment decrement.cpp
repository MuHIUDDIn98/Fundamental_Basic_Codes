#include<iostream>
using namespace std;

main(){
// ++x; prefix increment  x by one before it is used
//x++; postfix increment x by one after it is used

//--x; pre   decrement x by one before it is used
//x--; post decrement x by one after it is used


int x=3;
int y;
 y=x--;
cout<< "post \"D\" value of 'x' before decrement :" <<y<<endl;
cout<< "            value of 'x' after decrement :" <<x<<endl;
/*int a=5;
int t=a++;
cout<<"            value of 'a' after increment :"<<t<<endl;
cout<<endl;
cout<<endl;*/

int e=5;
int f;
 f=e++;
cout<< "post \"I\" value of 'e'  before increment :" <<f<<endl;
cout<< "             value of 'e' after increment :" <<e<<endl;
cout<<endl;
cout<<endl;


int p=3;
int q;
 q=--p;
cout<< "pre \"D\" value of 'p' after decrement :" <<q<<endl;
cout<< "          value of 'p' after decrement :" <<p<<endl;

cout<<endl;
cout<<endl;



int r=7;
int s;
 s=++r;
cout<< "pre \"I\" value of 'r' berfore increment :" <<s<<endl;
cout<< "            value of 'r' after increment :" <<r<<endl;





}
