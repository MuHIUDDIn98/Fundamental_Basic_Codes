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


    cout<<"=========printing 3 index's vector========="<<endl;
    for(int i=0; i<AdCL[3].size();i++){

        cout<<AdCL[3][i]<<" ";
    }
    cout<<endl;
    cout<<"=========printing 4 index's vector========="<<endl;
    for(int i=0; i<AdCL[4].size();i++){

        cout<<AdCL[4][i]<<" ";
    }
    cout<<endl;



    return 0;
}