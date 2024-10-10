#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter your nodes and Edges count"<<endl;
    cin>>n>>e;
    cout<<"entered node count :"+to_string(n)+" edges :"+to_string(e)<<endl;
    vector<int> AdCL[n];
    cout<<"Enter all '"+to_string(e)+"' edges "<<endl;
    while(e--){
        int a,b;
        cin>>a>>b;
        AdCL[a].push_back(b);
        AdCL[b].push_back(a);

    }
    int node;
    cout<<"Enter your querry node"<<endl;
    cin>>node;
    cout<<"printing n nodes connected nodes:"<<endl;
    for(int i=0; i<AdCL[node].size();i++){

        cout<<AdCL[node][i]<<" ";
    }
    cout<<endl;

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