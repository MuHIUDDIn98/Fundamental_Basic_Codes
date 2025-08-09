#include<bits/stdc++.h>
using namespace std;


int main(){


   priority_queue<int> pqMax; //max heap
   pqMax.push(3);
   pqMax.push(5);
   pqMax.push(6);
   pqMax.push(2);
   pqMax.push(1);
   pqMax.push(10);

   while(!pqMax.empty()){
    cout<<pqMax.top()<<" ";
    pqMax.pop();

   }

    cout<<endl;
   priority_queue<int,vector<int>,greater<int>> pqMin; //max heap
   pqMin.push(3);
   pqMin.push(5);
   pqMin.push(6);
   pqMin.push(2);
   pqMin.push(1);
   pqMin.push(10);

   while(!pqMin.empty()){
    cout<<pqMin.top()<<" ";
    pqMin.pop();

   }










return 0;
}