#include<bits/stdc++.h>
using namespace std;


int main(){


   list<int>myList  = {11,22,33,44,55,66};


    //assigning new list

    //myList.assign(myList.begin(),myList.end()); //long cut..
    list<int>newList = myList;
    for(int val: newList){
        cout<<val<<" ";
    }
    cout<<endl;
    list<int>new_list2 ={22,11,22,33,22,11,11,1,12,34};
    new_list2.assign(new_list2.begin(),new_list2.end());
    for(auto v : new_list2){
        cout<<v<< " ";
    }
    
return 0;
}