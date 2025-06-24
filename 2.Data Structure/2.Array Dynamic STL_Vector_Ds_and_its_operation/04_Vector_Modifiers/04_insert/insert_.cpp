#include<bits/stdc++.h>
using namespace std;


int main(){


   vector<int> v = {1,2,3,4,5};
   vector<int> v1 = {33,44};
   v.insert(v.begin()+2,100);

   
   for(auto x : v){

    cout<<x<<" ";
   }


   v.insert(v.begin()+2,v1.begin(),v1.end());


   cout<<endl;
   for(auto x : v){

    cout<<x<<" ";
   }










return 0;
}