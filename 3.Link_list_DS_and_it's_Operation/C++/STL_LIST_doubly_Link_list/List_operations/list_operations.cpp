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
    cout<<endl;
    //sorting..
    //Ascending
    mylist.sort();
    for(int val: mylist){
        cout<<val<<" ";
    }
    cout<<endl;
    //Descending..
    mylist.sort(greater<int>());
    for(int val: mylist){
        cout<<val<<" ";
    }
    cout<<endl;

    //unique value same value remove.
    list<int>mylist1 = {20,10,30,20,10,30,40,50,40,50};
    for(int val: mylist1){
        cout<<val<<" ";
    }
    cout<<endl;
    mylist1.sort();
    mylist1.unique();
    for(int val: mylist1){
        cout<<val<<" ";
    }
    cout<<endl;
    mylist1.sort(greater<int>());
    mylist1.unique();
    for(int val: mylist1){
        cout<<val<<" ";
    }
    cout<<endl;

    //reverse..
    mylist1.reverse();
    for(int val: mylist1){
        cout<<val<<" ";
    }
    cout<<endl;

    //element access 
    cout<<"front value :"<<mylist1.front()<<endl;
    cout<<"back vlue :"<<mylist1.back()<<endl;
    cout<<"index 3: "<<*next(mylist1.begin(),3)<<endl;
    return 0;
}