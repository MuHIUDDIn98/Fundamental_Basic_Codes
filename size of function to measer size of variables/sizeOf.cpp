#include<iostream>
using namespace std;
main()
{
   int a;
   short int e;
   long int longInt;
   long long int loloint;
   float b;
   double c;
   char d;
   char name[30];
   bool B;

   int g=sizeof(a);
   cout<<"size of integer variable ="<<g<<" byte"<<endl;
   int l=sizeof(e);
   cout<<"size of short integer variable ="<<l<<" byte"<<endl;

   int lon=sizeof(longInt);
   cout<<"size of long  integer  variable ="<<lon<<" byte"<<endl;
   int lonlon =sizeof(loloint);
   cout<<"size of long long integer variable ="<<lonlon<<" byte"<<endl;
   int f=sizeof(lonlon);
   cout<<"size of float variable ="<<f<<" byte"<<endl;
   int h=sizeof(c);
   cout<<"size of double variable ="<<h<<" byte"<<endl;
   int j=sizeof(d);
   cout<<"size of char variable ="<<j<<" byte"<<endl;
   int k=sizeof(name);
   cout<<"size of name char array variable ="<<k<<" byte"<<endl;
   int m=sizeof(B);
   cout<<"size of Bool variable ="<<m<<" byte"<<endl;

/* The C++ sizeof operator is also used to determine the size of an array.
For example:*/
    double myArr[10];
    cout <<"Size of myArr array : "<< sizeof(myArr) <<"byte"<< endl;

  int MyArr[10];
    cout <<"Size of MyArr array : "<< sizeof(MyArr) <<"byte"<< endl;


    return 0;
}
