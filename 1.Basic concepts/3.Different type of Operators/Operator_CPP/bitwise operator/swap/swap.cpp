#include<iostream>
using namespace std;


int main(){

int a,b;//3,5
cout<<"Enter your numbers :";
cin>>a>>b;
cout<<"a= "<<a<<" and "<<"b="<<b<<endl;

a=a^b;      //3= 0 1 1
b=a^b;      //5= 1 0 1
a=a^b;      //----------
          //xor= 1 1 0 = 6 stored in a

cout<<"a= "<<a<<"and "<<"b="<<b<<endl;

return 0;
}


   //1 1 0
   //1 0 1
   //-----
   //0 1 1  =3 store in b

   //1 1 0
   //0 1 1
   //------
   //1 0 1 = 5 stored in a
