#include<bits/stdc++.h>
#include<vector>
using namespace std;



int main(){
    int N;
    cin>>N;
    vector<int> A(N);

    for(int i=0; i<N; i++){
        cin>>A[i];
        if(A[i]>0){
            A[i]=1;
        }
        else if(A[i]<0){
            A[i]=2;
        }
    }

    for(int num:A){
        cout<<num<<" ";
    }

    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my