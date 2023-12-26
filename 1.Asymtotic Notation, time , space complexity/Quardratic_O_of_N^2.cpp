#include<bits/stdc++.h>
using namespace std;

int main(){
    int b=0,N=10,count=0;
    for(int i=0; i<N; i++){
        for(int i=0; i<N; i++){
            b+=rand();
            cout<<b<<" "<<endl;
            cout<<count++<<endl;
        }

    }
    cout<<" =========="<<endl;
    int value=0;
    for(int i=0; i<N; i++){

        for(int i=0; i<N; i++){
        value+=1;
        cout<<value<<endl;
       
         }

    }
    cout<<" =========="<<endl;
    int a = 0;
    for(int i=0; i<N;i++){
        for(int j = N; j>i;j--){
            cout<<i<<" "<<j<<endl;
            a = a+i+j;
        }
    }

    cout<<"================="<<endl; //O(N^2-N)
    int val=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){     //O(N)
        for(int j=0;j<i;j++){ //O(n-1)
           val+=1;
           cout<<val<<endl;
        }
        cout<<"=="<<endl;
    }
    cout<<"======================="<<endl;
    int k=20;
    for(int i=0;i<k;i++){
        for(int j=i;j>0;j--){
            cout<<i<<" "<<j<<endl; 
        }
    }

    return 0;


}