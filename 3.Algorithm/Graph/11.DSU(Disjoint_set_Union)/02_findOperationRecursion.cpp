#include<bits/stdc++.h>
using namespace std;


int G_L[1005];


int findLeader(int node){
    
    cout<<node<<endl;
    if(G_L[node] == -1)
        return node;

    return findLeader(G_L[node]); //0(n)
}

int main(){

    memset(G_L,-1,sizeof(G_L));

    //set Leader first manually

    G_L[0] = 1;
    G_L[1] = -1;
    G_L[2] = 1;
    G_L[3] = 1;
    G_L[4] = 5;
    G_L[5] = 3;

    cout<<findLeader(4)<<endl;
   
return 0;
}