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




void bfs(int si, int sj){
    queue<pair<int,int>> q;

    q.push({si,sj});
    vis[si][sj] = true;


    while(!q.empty()){
        pair<int,int> par = q.front();

        int par_i = par.first;
        int par_j = par.second;
        q.pop();
        cout<<par_i<< "   "<<par_j<<endl;
        

        for(int i = 0; i<4; i++){

            int ci = par_i + direction[i].first;
            int cj = par_j + direction[i].second;

            if(valid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
        
            }
        }
    }
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


int si,sj,di,dj;
cout<<"Enter your source :"<<endl;
cin>> si >> sj;
cout<<"Enter your destination :"<<endl;
cin>> di >> dj;

memset(vis,false,sizeof(vis));

bfs(si,sj);

   
return 0;
}