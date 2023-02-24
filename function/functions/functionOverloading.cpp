
#include<iostream>
#include<conio.h>
using namespace std;
void sum(int ,int );
void sum(int ,int,int );
void sum(int ,int,int,int );
void sum(int);
void sum(double);

main(){

sum(1,2,3);
cout<<endl;

sum(1,2);
cout<<endl;
sum(1,2,3,4);
cout<<endl;
sum(10.5);
cout<<endl;
sum(10);

    getch();
}
void sum(int a,int b)
{
  int sum=a+b;
  cout<<"sum="<<sum;


}
void sum(int a,int b,int c)
{
  int sum=a+b+c;
  cout<<"sum="<<sum;


}
void sum(int a,int b,int c,int d)
{
  int sum=a+b+c+d;
  cout<<"sum="<<sum;


}
void sum(int a){

cout<<"sum int="<<a<<endl;
}

void sum(double b){

cout<<"sum double ="<<b<<endl;
}
