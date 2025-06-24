#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1(10);
    v1.push_back(10);
    for(auto x : v1){
        cout<<x<<" ";
    }

    cout<<endl;
    
    v1.pop_back();

    for(auto x : v1){
        cout<<x<<" ";
    }

    cout<<endl;


    return 0;
}