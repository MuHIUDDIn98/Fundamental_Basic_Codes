#include<bits/stdc++.h>
using namespace std;


int main(){

     list<int>mylist = {1,2,3,4};
    //maximum size finder..
    cout<<"mylist maximum size :"<<mylist.max_size()<<endl;
    for(int val : mylist){
        cout<<val<<" ";
    }

   
return 0;
}