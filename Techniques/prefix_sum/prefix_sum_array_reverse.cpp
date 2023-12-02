#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &i:a){

        cin>>i;
    }

    vector<long long int> Pfx_sum(n);

    Pfx_sum[0] = a[0];

    for(int i = 1; i<n; i++){
        Pfx_sum[i] = a[i]+Pfx_sum[i-1];
    }

    reverse(Pfx_sum.begin(),Pfx_sum.end());

   for(int i=0; i<n; i++){
        if(i == n-1){
            cout<<Pfx_sum[i];
        }
        else{
        cout<<Pfx_sum[i]<<" ";
        }

   }
    return 0;
}