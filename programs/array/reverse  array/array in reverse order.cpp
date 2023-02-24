#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"enter elements  number of array"<<endl;
     cin>>n;
     int a[n];
     cout<< "enter array elements"<<endl;
     for(int i=0;i<n;i++)
     {
          cin>>a[i];

     }

     cout<<"elements of array"<<endl;
     for(int i=0;i<n;i++)
     {
          cout<<a[i]<<" ";


     }
cout<<endl;

     cout<<"reverse order of array:"<<endl;
     for(int i=n-1;i>=0;i--)
     {
          cout<<a[i]<<" ";

     }
     return 0;
}
