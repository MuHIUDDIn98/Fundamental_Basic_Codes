#include<iostream>
#include<conio.h>
using namespace std;

void addition(int a,int b)
{
  int sum=a+b;
  cout<<"sum="<<sum;


}
main(){
    int x,y;
    cout<<"Enter your 1st number:";
    cin>>x;
    cout<<"Enter your 2nd number:";
    cin>>y;

    addition(x,y);
    getch();
}
