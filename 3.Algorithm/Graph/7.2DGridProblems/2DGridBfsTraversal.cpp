#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
int n,m;
bool vis[105][105];
int level[105][105];

vector<pair<int,int>> d = {};

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

        for(int i = 0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.' )
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j]+1;
            }
        }
    }


}

int main(){

    cin>> n >> m;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin>>grid[i][j];

    int si, sj, di, dj;
    cin>>si>>sj>>di>>dj;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(si,sj);

    cout<<level[di][dj]<<endl;

   
return 0;
}