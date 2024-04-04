
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter your node and edge count in adjacency matrix :"<<endl;
    cin>>n>>e;
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //putting edge count in the adjacency matrix 
    while(e--){
        int a,b;
        cin>>a>>b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
   //adjacency matrix of given edge count
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}