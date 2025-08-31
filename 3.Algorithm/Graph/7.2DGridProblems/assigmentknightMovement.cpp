#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
int n,m;
bool vis[105][105];
int level[105][105];

vector<pair<int,int>> d = {{2,1},{2,-1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2}};

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

void bfs(int si, int sj){

    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()){
        auto p = q.front();
        q.pop();
        int par_i = p.first;
        int par_j = p.second;

        for(int i = 0; i<8; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] )
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j]+1;
            }
        }
    }


}

int main(){

    
    // Write your code here
    int tc;
    int si, sj, di, dj;
    cin>>tc;
    string src,des;
    while(tc--){

    cin>>n>>m;
    cin>>si>>sj;
    cin>>di>>dj;
    

    //cout<<si<<" "<<sj<<"        "<<di<<" "<<dj<<endl;
    
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(si,sj);

    cout<<level[di][dj]<<endl;

    }

    

   
return 0;
}