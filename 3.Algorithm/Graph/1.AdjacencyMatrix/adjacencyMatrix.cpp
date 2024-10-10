
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter your node and edge count in adjacency matrix :"<<endl;
    cin>>n>>e;
    int matrix[n][n];
    //set all value in matrix zero
    memset(matrix,0,sizeof(matrix));
    cout<<"===========priting matrix elements============="<<endl;
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"====================Enter your edges============="<<endl;
    while(e--){
        int a,b;
        cin>>a>>b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
   //adjacency matrix of given edge count
   cout<<"===========priting the adjecency matrix============== "<<endl;
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}