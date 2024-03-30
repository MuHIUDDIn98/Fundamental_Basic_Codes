#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005]; //adjacency list
//vsited node status
bool vis[1005];

//level traversal track 
int level[1005];

void bfs(int src){

    queue<int> q;
    q.push(src);


    vis[src] = true;

    level[src] = 0;

    
    while(!q.empty()){

        int par = q.front();
        q.pop();
        cout<<par<<endl;

        // for(int i=0; i<v[par].size(); i++){

        //     int child = v[par][i];
        //     cout<<child<<endl;
        // }

        for(int child : v[par]){
            
            cout << child <<endl;

            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }

    }


} 

int main(){
    int n,e;
    cin>>n>>e;
    while(e--){

        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));

    
    bfs(src);

    for(int i=0; i<n; i++){
        cout<< i <<"   "<<level[i]<<endl;

    }

    
    return 0;
}