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
    
    //cout<<"["<<si<<"]" <<"["<<sj<<"]"<<endl;

    vis[si][sj] = true;


    for(int i = 0; i<4; i++){
        int ci,cj;
        ci = si + direction[i].first;
        cj = sj + direction[i].second;
        
        if( valid(ci,cj)  && !vis[ci][cj] && (grid[ci][cj]=='.' || grid[ci][cj]=='E')){

            //end point visit then not call dfs
            dfs(ci,cj);

        }


    }
    cout<<endl;


}


int main(){

cout<<"Enter your girid element size n and m :"<<endl;
cin>>n>>m;

cout<<"Enter your grid elements "<<n<<" * "<<m<<" = "<<n*m<< " =  " <<n*m<<" :"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>> grid[i][j];
    }
}

int si,sj,ei,ej;
    cout<<endl;



//printing the city grids 
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){

        cout<< grid[i][j];
        if(grid[i][j]=='S'){
            si = i,sj = j;
        }
        if(grid[i][j]=='E'){
            ei = i, ej = j;
        }
        
    }
    cout<<endl;
}

cout<<""<<si<<"  "<<sj<<endl;
cout<<ei<<"  "<<ej<<endl; 






memset(vis,false,sizeof(vis));
dfs(si,sj);


cout<<endl;
//visited grid
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<< vis[i][j];
    }

    cout<<endl;
}
   
return 0;
}


/*


*******
*S..*.*
*.*.*.*
*.*...*
*..*E.*
*******




*/