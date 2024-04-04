#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {12,13,14,15,16};
    vector<int>v2 = {1,2,3};
    v2 = v; //v.assign(v);
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;
}