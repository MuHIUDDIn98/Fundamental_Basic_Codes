#include<bits/stdc++.h>
using namespace std;


int main(){

 //pushfront
 list<int>myList;
    cout<<"push_front"<<endl;
    myList.push_front(300);
    myList.push_front(400);
    myList.push_front(500);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    myList.pop_front();
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

   
return 0;
}