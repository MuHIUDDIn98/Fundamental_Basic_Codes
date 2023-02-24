#include<iostream>
using namespace std;

main(){
int i,n,sum=0;
cout<<"1+2+3+4+.............+n"<<endl;
cout<<"enter your last number:";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }

    cout<<"your sum of seriese  1+2+3+....+"<<n<<"  is:"<<sum<<endl;


    cout<<endl;


     i=0;
     n=0;
     sum=0;
cout<<"1+3+5+7+.............+n"<<endl;
cout<<"enter your last number:";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;

    }

    cout<<"your sum of seriese  1+3+5+....+"<<n<<"  is:"<<sum<<endl;
     cout<<endl;

    int a=1,b=2,n1,n2;
    sum=0;
     cout<<"1*1+1*2+2*3+3*4+............+n1*n2"<<endl;
    cout<<"enter your 1st number:"<<" ";
    cin>>n1;
    cout<<"enter your 2nd number:";
    cin>>n2;


    while(a<=n1&&b<=n2){

        sum=sum+a*b;

        a=a+1;
        b=b+1;


    }

    cout<<"sum of 1*1+1*2+2*3+3*4+............+"<<n1<<"*"<<n2<<" is :"<<sum<<endl;



}
