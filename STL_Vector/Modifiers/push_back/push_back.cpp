#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1(10);
    for(int i=0; i<v1.size(); i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i];
    }

    return 0;
}