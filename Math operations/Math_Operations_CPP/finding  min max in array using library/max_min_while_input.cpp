#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx = INT_MIN, mn=INT_MAX;
    for(int i=0;i<n; i++){
        cin>>arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Max ="<<mx<<" Min ="<<mn<<endl;

  

    return 0;
}