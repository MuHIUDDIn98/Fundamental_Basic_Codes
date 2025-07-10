#include<bits/stdc++.h>
using namespace std;


int main(){
    list<int> mylist={1,2,3,4,5};
    cout<<"List size is :"<<mylist.size()<<endl;
    //initialize with size 10
    list<int>mylist1(10);
    cout<<"mylist1 size :"<<mylist1.size()<<endl;

    //initiallize with 10 size and component all component 5
    list<int>mylist2(10,5);

    //printing front of the link list
    cout<<"front of mylist2 :"<<mylist2.front()<<endl;
    cout<<"all element of mylist2"<<endl;
    for(auto it=mylist2.begin(); it!=mylist2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto v : mylist2){
        cout<<v<<" ";
    }
   
return 0;
}