#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>mylist;
    cout<<mylist.size()<<endl;
    list<int>mylist1(10);
    cout<<mylist1.size()<<endl;
    list<int>mylist2(10,5);
    cout<<mylist2.front()<<endl;
    for(auto it=mylist2.begin(); it!=mylist2.end(); it++){
        cout<<*it<<"  ";
    }
    cout<<endl;
    list<int>mylist5 = {1,2,3,4,5};
    list<int>mylist6(mylist5);

    for(auto it=mylist6.begin(); it!=mylist6.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    return 0;
}