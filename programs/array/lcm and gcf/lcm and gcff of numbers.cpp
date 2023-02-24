#include<iostream>
using namespace std;
int main()
{int n1;
int n2;
int gcd;
int lcm;
int x,y;
int k;
//methode one
cout<<"enter 2 number"<<endl;
cin>>n1>>n2>>n2;
x =n1;
y=n2;

while(n1!=n2)
{
     if(n1>n2)
     {
         n1= n1-n2;
     }
     else{
      n2=n2-n1;
     }

}
 cout<<"GCF="<<n1<<endl;
gcd=n1;
lcm=(x*y)/gcd;
cout<<"lcm="<<lcm<<endl;

//method 2
 for(k=x;k<=x*y;k++)
 {
      if(k%x==0&&k%y==0)
      {
          cout<<"Lcm="<< k ;
          break;     }
 }

cout<<endl<<endl;
 for(k=x;k>=1;k--)
 {
    if(x%k==0&&y%k==0)
    {cout<<"gcf="<<k;
    break;
    }
 }

     return 0;


}
