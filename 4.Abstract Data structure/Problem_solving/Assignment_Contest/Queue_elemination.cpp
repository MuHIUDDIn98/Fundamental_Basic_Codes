#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>Q;
    int T;
    cin>>T;
    while(T--){
        int command;
        string name;
        cin>>command;
        
        if(command == 0){
            cin>>name;
            cout<<name<<endl;
            Q.push(name);
        }
        else if(command == 1){
             if(!Q.empty()){
                cout<<Q.front()<<endl;
                Q.pop();
             }
             else{
                cout<<"Invalid"<<endl;
             }
        }
    }
    return 0;
}

//contest link:
//https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-04/challenges