#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> v[N];
bool vis[N];

void dfs(int src){
    

    cout<<src<<" ";
    vis[src] = true;

    // for(int i=0; i<v[src].size(); i++){
    //     int child = v[src][i];
    // }
    for(int child : v[src]){
            
        if(vis[child] == false){  // dfs base case  
            dfs(child);
        }

    }
    
}

int main(){
    memset(vis,false,sizeof(vis));
    int n,e;
    int count=0;
    cin >> n >> e;
    while(e--){

        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i = 0; i<n ;i++){
        
        if(vis[i] == false)
        {
            dfs(i);
            cout << endl;
            count ++;
        }  

    }
    
   cout<<"components count "<<count<<endl;
    return 0;
}