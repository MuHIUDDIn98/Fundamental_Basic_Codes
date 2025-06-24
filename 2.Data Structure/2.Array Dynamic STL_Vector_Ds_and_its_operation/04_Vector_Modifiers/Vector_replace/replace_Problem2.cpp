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

    replace_if(A.begin(), A.end(), [](int num) { return num > 0; }, 1);
    replace_if(A.begin(), A.end(), [](int num) { return num < 0; }, 2);

    for(int num:A){
        cout<<num<<" ";
    }

    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my