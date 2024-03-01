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
    //pushback
    cout<<"push_back"<<endl;
    myList.push_back(200);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    //pushfront
    cout<<"push_front"<<endl;
    myList.push_front(300);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    //popback
    cout<<"pop_back"<<endl;
    myList.pop_back();
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    //popfront
    cout<<"pop_front"<<endl;
    myList.pop_front();
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;


    //insert at any position... O(N)
    cout<<"inserting any position"<<endl;
    myList.insert(next(myList.begin(),3),44444);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"insert at head"<<endl;
    myList.insert(next(myList.begin(),0),6666);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"insert at tail"<<endl;
    myList.insert(next(myList.begin(),8),8888);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    //insert multiple values 
    cout<<"insert multiple values "<<endl;
    myList.insert(next(myList.begin(),3),{111,222,333,444});
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;

    //insert a full list in a list.
    list<int>New = {21,31,41};
    cout<<"insert list"<<endl;
    myList.insert(next(myList.begin(),1),New.begin(),New.end());
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;




    //replace
    cout<<"replace "<<endl;
    replace(myList.begin(),myList.end(),44444,11111);
    replace(myList.begin(),myList.end(),444,111);
    replace(myList.begin(),myList.end(),8888,1111);
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;
    


    //find function...
    auto it = find(myList.begin(),myList.end(),1111);
    if(it == myList.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }


    //delete 
    cout<<endl;
    //delete from head
    cout<<"delete from head"<<endl;
    myList.erase(next(myList.begin(),0));
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;
    
    //delete from specific position..
    cout<<"delete  from 6"<<endl;
    myList.erase(next(myList.begin(),6));
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;


    //deleting range of number...
    cout<<"delete range of number"<<endl;
    myList.erase(next(myList.begin(),2),next(myList.begin(),10));
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;






    return 0;
}