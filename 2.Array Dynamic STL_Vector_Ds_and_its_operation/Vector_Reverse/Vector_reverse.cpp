#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin>>A[i];
    }

    reverse(A.begin(),A.end());
    for(int num:A){
        cout<<num<<" ";
    }

    return 0;
}