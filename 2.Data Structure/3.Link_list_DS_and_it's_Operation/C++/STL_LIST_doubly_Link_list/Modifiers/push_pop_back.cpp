#include<bits/stdc++.h>
using namespace std;


int main(){

 //pushback
 list<int>myList;
    cout<<"push_back"<<endl;
    myList.push_back(300);
    myList.push_back(400);
    myList.push_back(500);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    myList.pop_back();
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

   
return 0;
}