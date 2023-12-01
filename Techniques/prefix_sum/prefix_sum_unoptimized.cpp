#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){

        cin>>a[i];
    }
    while(q--){

        long long int sum = 0;
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        for(int i = l ; i<=r; i++){
            sum+=a[i];
        }

        cout<<sum<<endl;
    }


    return 0;
}