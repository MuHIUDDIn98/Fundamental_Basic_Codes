#include<bits/stdc++.h>
using namespace std;

int main(){

    int N,M;
    cin>>N;
    vector<int>A(N);
    for(int &x:A){
        cin>>x;
    }
    cin>>M;
    vector<int>B(M);
    for(int &x:B){
        cin>>x;
    }

    int index;
    cin>>index;
     A.insert(A.begin()+index,B.begin(),B.end());
    
    
    for(int i=0; i<M+N; i++){
        if(i == (M+N)-1){
            cout<<A[i]<<" ";
        }
        else{
            cout<<A[i]<<" ";
        }
    }

    return 0;
}