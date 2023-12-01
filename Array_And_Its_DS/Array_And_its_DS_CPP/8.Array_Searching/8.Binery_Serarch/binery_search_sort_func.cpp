#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){
     cin>>a[i];
    }
    //sorting ..
    sort(a,a+n);
    //test case..
    while(q--){
        int x;
        cin>>x;
        bool flag = false;
        int l=0,r=n-1;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            if(x==a[mid]){
                flag=true;
                break;
            }
            else if(x<a[mid]){
                r = mid -1;
            }
            else{
                l=mid+1;
            }

        }
        if(flag){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }        
    }


    return 0;
}