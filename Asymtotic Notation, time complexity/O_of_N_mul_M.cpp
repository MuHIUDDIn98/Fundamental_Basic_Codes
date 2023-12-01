#include<bits/stdc++.h>
using namespace std;
//O(N*M)
int main(){
    int b=0,N=10,M=20,count=0;
    for(int i=0; i<N; i++){
        for(int i=0; i<M; i++){
        b+=rand();
        cout<<b<<" "<<endl;
        cout<<count++<<endl;
    }

    }
    return 0;
}