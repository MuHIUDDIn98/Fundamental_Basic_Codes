#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>v;                     //type 1

   cout<<"Size of v :"<<v.size()<<endl;

   vector<int>v1(5);                 //type 2
   //vector size
   cout<<"Size of v1 :"<<v1.size()<<endl;
   //vector elements are
   for (int i=0; i<v1.size(); i++){
     cout<<v1[i]<<" ";

   }

   cout<<endl;


   vector<int>v2(10,10);              //type 3
   //vector size
   cout<<"Size of v2 :"<<v2.size()<<endl;
   //vector elements are
   for (int i=0; i<v2.size(); i++){
     cout<<v2[i]<<" ";

   }

   cout<<endl;

   //vector copy ..                   //type 4
   vector<int>v3(v2);
   //vector size
   cout<<"Size of v3 :"<<v3.size()<<endl;
   //vector elements are
   for (int i=0; i<v3.size(); i++){
     cout<<v3[i]<<" ";

   }
   cout<<endl;
   //array insert in vector
   cout<<"Enter your array size:"<<endl;
   int n;
   cin>>n;
   int array[n];
   for(int i=0; i<n; i++){
   cin>>array[i];
   }
   cout<<"Array elements are "<<endl;
   for(int i=0; i<n; i++){
   cout<<array[i]<<" ";
   }
   cout<<endl;

   vector<int>arr(array,array+n);       //type 5
   cout<<"Size of arr :"<<arr.size()<<endl;
   //vector elements are
   for (int i=0; i<arr.size(); i++){
     cout<<arr[i]<<" ";

   }


    return 0;
}