#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){

        cin>>a[i];
    }

    long long int Pfx_sum[n];

    Pfx_sum[0] = a[0];

    for(int i = 1; i<n; i++){
        Pfx_sum[i] = a[i]+Pfx_sum[i-1];
    }

    while(q--){

        long long int sum;
        int l,r;
        cin>>l>>r;
        l--;
        r--;

        if(l==0) sum = Pfx_sum[r];
        else sum = Pfx_sum[r] - Pfx_sum[l-1];
        

        cout<<sum<<endl;
    }


    return 0;
}