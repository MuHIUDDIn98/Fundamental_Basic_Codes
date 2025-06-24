#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) // O(logN)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }

    // for(int i=1;i<=n;i=i*2) // O(logN)
    // {
    //     cout<<i<<endl;
    // }


   cout<<"================"<<endl;
   int i,j,k = 0;
   for(i=n/2; i<=n; i++){
    for(j = 2; j<=n; j=j*2){
        cout<<"i = "<<i<<" "<<"j = "<<j<<endl;
        k = k +n/2;
        cout<<k<<endl;
    }
   }


   cout<<"+++++++++++++++++++"<<endl;

   int x = 0; i = n;
   while(i>0){
    x += i;
    cout<<"x = "<<x<<endl;
    i/=2;                    //log2baseN
    cout<<"i ="<<i<<endl;
   }

   cout<<"==================="<<endl;
   for (int i = 0; i < n; i++)
   { cout<<"i brfore:"<<i<<endl;
    i*=2;                    //log2baseN
    cout<<"i*=2:"<<i<<endl;
   }
   

    return 0;
}