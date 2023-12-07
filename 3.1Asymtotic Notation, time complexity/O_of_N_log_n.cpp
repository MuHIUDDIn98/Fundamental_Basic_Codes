#include<bits/stdc++.h>
using namespace std;
//O(logn) log of k base n
int main(){
    int i,j,k=0,n = 10;
    for(i=n/2; i<n; i++){  //O(n)
        cout<<" ====  "<<endl;
        for( j=2; j<=n; j=j*2){ //logn
            k=k+n/2;
            cout<<k<<endl;
        }
    }

    cout<<"======+++++========"<<endl;
    int g = 50;
    int f = 0;
    while(g>f){
     g = g/2; //logn
     cout<<g<<endl;
    }
    cout<<"====+++++++++++++===="<<endl;
    int o = 100;
    int z = 5;
    for(int i=0; i<o; i++){
        cout<<"before i = "<<i<<endl; //logn ..log k base n
        i*=z;
        cout<<"after = "<<i<<endl;
    }
    

    return 0;
}
//O(n*logn) = O(nlogn)