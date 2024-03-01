#include <bits/stdc++.h>

using namespace std;



int main()
{
   list<int>myList;
    int i=0;
    int val;
    while(true){
     cin>>val;
     if(val == -1) break;
     if(i == myList.max_size()) break;
     myList.insert(next(myList.begin(),i),val);
     i++;
    }
    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.sort();
    myList.unique();

    for(int val: myList){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}