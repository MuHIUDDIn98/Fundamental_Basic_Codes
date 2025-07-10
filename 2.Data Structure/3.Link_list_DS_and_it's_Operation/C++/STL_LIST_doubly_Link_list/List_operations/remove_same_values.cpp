#include<bits/stdc++.h>
using namespace std;


int main(){

    list<int>mylist={10,20,10,30,70,40,50,10,60};
    for(int val: mylist){
        cout<<val<<" ";
    }
    cout<<endl;
    //remove duplicate.. or same 
    mylist.remove(10);
    for(int val: mylist){
        cout<<val<<" ";
    }
   
return 0;
}