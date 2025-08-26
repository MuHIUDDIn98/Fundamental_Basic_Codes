#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int n,m;

vector<pair<int,int>> direction = {{0,-1},{0,-1},{-1,0},{1,0}};



void dfs(int si, int sj){
    cout<<"Source index : "<<endl;
    cout<<"["<<si<<"]" <<"["<<sj<<"]"<<endl;
    vis[si][sj] = true;


    cout<<"Connected nodes :"<<endl;
    for(int i = 0; i<4; i++){
        int ci,cj;
        ci = si + direction[i].first;
        cj = sj + direction[i].second;
        cout<<"["<<ci<<"]" <<"["<<cj<<"]"<<endl;

    }
    cout<<endl;


}


int main(){

cout<<"Enter your girid element size n and m :"<<endl;
cin>>n>>m;

cout<<"Enter your grid elements"<<n<<"*"<<m<<" :"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>> grid[i][j];
    }
}

cout<<"Entered Grid Elements :"<<endl;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout << grid[i][j];
    }
    cout<<endl;
}
int si,sj;
cout<<"Enter your source :"<<endl;
cin>> si >> sj;
memset(vis,false,sizeof(vis));
dfs(si,sj);

   
return 0;
}