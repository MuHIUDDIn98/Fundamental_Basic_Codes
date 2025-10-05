#include<bits/stdc++.h>
using namespace std;


int G_L[1005];
int Group_Size[1005];

int findLeader(int node){
    
    cout<<node<<endl;
    if(G_L[node] == -1)
        return node;

   
    int leader =  findLeader(G_L[node]); //0(logn)
    G_L[node] = leader;

    
    return leader;
}


void dsu_union(int node1, int node2){
    int leader1 = findLeader(node1);
    int leader2 = findLeader(node2);

    if(Group_Size[leader1]>= Group_Size[leader2]){
        G_L[leader2] = leader1;
        Group_Size[leader1] += Group_Size[leader2];
    }
    else {
        G_L[leader1] = leader2;
        Group_Size[leader2] += Group_Size[leader1];
    }
}


int main(){

    memset(G_L,-1,sizeof(G_L));
    memset(Group_Size,1,sizeof(Group_Size));


    dsu_union(1,2);


    cout<<findLeader(4)<<endl;
   

    for(int i=0; i<6; i++){

        cout<<i<<"--> "<<G_L[i]<<endl;
    }
return 0;
}