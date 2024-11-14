#include<bits/stdc++.h>
using namespace std;
//adj list
vector<int> v[1005];
//
bool vis[1005];
//

int level[1005];
queue<int> q;



void bfs(int src,int dest){
    
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout<<par<<endl;

        for(int child : v[par]){

            if(!vis[child]){
                q.push(child);
                vis[child] =true;
                level[child] = level[par]+1;

            }

        }
    }

}



int main(){

    int node=0,edges=0;
    memset(vis,false,sizeof(vis));

    cout<<"Enter nodes and eadges  number:"<<endl;
    cin>>node>>edges;
    cout<<"Entered nodes: "<<node<<"   Entered edges :"<<edges<<endl;
    int a,b;

cout<<"Enter eadges  :"<<endl;
    while(edges--){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cout<<"Enter your source :"<<endl;
    cin>>src;
    bfs(src);

    return 0;
}