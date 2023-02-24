#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"enter element number"<<endl;
     cin>>n;

     int a[n];

     for(int i=0;i<n;i++)
     {
          cin>>a[i];

     }
     for(int i=0;i<n;i++)
     {
          cout<<a[i]<<" ";

     }

  cout<<endl;

     int sum=0;
     for(int i=0;i<n;i++){sum+=a[i];}
     cout<<"sum of array="<<sum<<endl;
     return 0;
}
