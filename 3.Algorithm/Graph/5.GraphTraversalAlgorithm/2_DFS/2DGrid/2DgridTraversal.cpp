#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int n,m;

vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j){
    if(i<0 || i >=n || j<0 || j>=m)
            return false;  
            
    return true;
}

void dfs(int si, int sj){
    
    cout<<"["<<si<<"]" <<"["<<sj<<"]"<<endl;

    vis[si][sj] = true;


    for(int i = 0; i<4; i++){
        int ci,cj;
        ci = si + direction[i].first;
        cj = sj + direction[i].second;
        
        if( valid(ci,cj)  && !vis[ci][cj] ){
            dfs(ci,cj);

        }


    }
    cout<<endl;


}


int main(){

cout<<"Enter your girid element size n and m :"<<endl;
cin>>n>>m;

cout<<"Enter your grid elements "<<n<<" * "<<m<<" = "<<n*m<< " =" <<n*m<<" :"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>> grid[i][j];
    }
}


int si,sj;
cout<<"Enter your source :"<<endl;
cin>> si >> sj;
memset(vis,false,sizeof(vis));
dfs(si,sj);

   
return 0;
}