#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    vector<int> AdCL[n];
    while(e--){
        int a,b;
        cin>>a>>b;
        AdCL[a].push_back(b);
        AdCL[b].push_back(a);

    }


    cout<<"=========printing========="<<endl;
    for(int i=0; i<AdCL[3].size();i++){

        cout<<AdCL[3][i]<<" ";
    }


    return 0;
}