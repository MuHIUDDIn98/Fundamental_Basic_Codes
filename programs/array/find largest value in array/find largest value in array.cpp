#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter your array element:";
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
   }
   cout<<"entered element of array:"<<endl;
   for(int i=0;i<n;i++)
   {
        cout<<a[i]<<"  ";
   }
 cout<<endl<<endl<<endl;
  int largest=INT_MIN;
  for(int i=0;i<n;i++)
  {
     if(a[i]>largest)
        {
         largest=a[i];
        }
  }
cout<<"largest number="<<largest<<endl<<endl;


int smallest=INT_MAX;
for(int i=0;i<n;i++)
{
     if(a[i]<smallest)
     {
          smallest=a[i];
     }
}
cout<<"smallest number="<<smallest<<endl;
   return 0;
}
