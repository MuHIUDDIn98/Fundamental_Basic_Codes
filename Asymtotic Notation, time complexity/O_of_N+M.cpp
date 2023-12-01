#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0,b=0,N=10,M=20;
    for(int i=0; i<N; i++){
        a+=rand();
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<"different loop"<<endl;
    for(int i=0; i<M; i++){
        b+=rand();
        cout<<b<<" ";
    }


    return 0;
}