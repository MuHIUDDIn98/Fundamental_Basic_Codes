
#include<iostream>
#include<conio.h>
using namespace std;

int addition(int,int);
double subtraction(double,double);
main(){
    int x,y;

    double e,f;

    cout<<"Enter your 1st number:";
    cin>>x;
    cout<<"Enter your 2nd number:";
    cin>>y;

   int result= addition(x,y);
   cout<<"addition function result="<<result<<endl;

   cout<<"Enter your double 1st number:";
    cin>>e;
    cout<<"Enter your double 2nd number:";
    cin>>f;
   double result2= subtraction(e,f);
   cout<<"double subtraction function result="<<result2;


    getch();
}
int addition(int a,int b)
{
  int sum=a+b;
  return sum;


}
double subtraction(double a,double b)
{
  double sum=a-b;
  return sum;


}
