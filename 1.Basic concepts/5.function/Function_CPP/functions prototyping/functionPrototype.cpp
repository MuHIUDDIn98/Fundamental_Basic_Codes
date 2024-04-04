
#include<iostream>
#include<conio.h>
using namespace std;
void addition(int ,int );
void subtraction(int ,int );
void divition(int ,int );

main(){
    int x,y;
    cout<<"Enter your 1st number:";
    cin>>x;
    cout<<"Enter your 2nd number:";
    cin>>y;

    addition(x,y);
    cout<<endl;
    subtraction(x,y);
    cout<<endl;
    divition(x,y);
    getch();
}
void addition(int a,int b)
{
  int sum=a+b;
  cout<<"sum="<<sum;


}
void subtraction(int a,int b)
{
  int sub=a-b;
  cout<<"subtraction="<<sub;


}
void divition(int a,int b)
{
  float div=(float)a/b;
  cout<<"divition="<<div;


}

