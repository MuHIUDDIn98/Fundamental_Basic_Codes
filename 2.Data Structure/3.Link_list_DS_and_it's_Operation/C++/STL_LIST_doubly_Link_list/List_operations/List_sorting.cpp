#include<bits/stdc++.h>
using namespace std;


int main(){

    list<int>mylist={10,20,10,30,70,40,50,10,60};
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
    mylist1.sort(); //we must sort first to accomplish our sorting
    mylist1.unique();
    for(int val: mylist1){
        cout<<val<<" ";
    }

    //decending order sorting 
    cout<<endl;
    mylist1.sort(greater<int>());
    for(int val: mylist1){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}