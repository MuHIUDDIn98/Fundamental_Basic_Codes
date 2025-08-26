#include<bits/stdc++.h>
using namespace std;
//adj list
vector<int> Nodes[1005];
//
bool visitedStatus[1005];

int parent[1005];

int level[1005];


queue<int> q;



void bfs(int src){
    memset(visitedStatus,false,sizeof(visitedStatus));
    memset(level, -1, sizeof(level)); // initialize level as -1
    memset(parent,-1, sizeof(parent));

    q.push(src);
    visitedStatus[src] = true;
    level[src] = 0;
    //parent[src]= -1; source node parent already -1

    while(!q.empty()){
        int par = q.front();
        q.pop();


        cout<<par<<endl;

        for(int child : Nodes[par]){

            if(!visitedStatus[child]){
                q.push(child);
                visitedStatus[child] =true;
                level[child] = level[par]+1;
                parent[child]  = par;

            }

        }
    }

}



int main(){
   

    int node,edges;
    
    cout<<"Enter nodes and eadges  number:"<<endl;
    cin>>node>>edges;
    cout<<"Entered nodes: "<<node<<"   Entered edges :"<<edges<<endl;
    int a,b;

cout<<"Enter eadges  :"<<endl;
    while(edges--){
        cin>>a>>b;
        Nodes[a].push_back(b);
        Nodes[b].push_back(a);
    }

    int src,des;
    cout<<"Enter your source and destination :"<<endl;
    cin>>src>>des;
    bfs(src);



     for(int i = 0; i<node ; i++){
        cout<< i << "Parent ->"<<parent[i]<<endl;
    }


    return 0;
}