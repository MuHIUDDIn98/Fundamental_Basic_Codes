#include<bits/stdc++.h>
using namespace std;

main(){
int a,b,i;
cout<<"Enter your 1st number:";
cin>>a;
cout<<endl;
cout<<"Enter your end number:";
cin>>b;

for(i=a;i<=a*b;i++)
{

    if(i%a==0&&i%b==0)
    {

       cout<<"LcM of your numbers:" <<i;
       break;

    }

}


}
