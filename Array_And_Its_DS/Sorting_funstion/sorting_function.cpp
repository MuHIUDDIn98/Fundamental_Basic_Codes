#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){

        cin>>a[i];

    }

    cout<<"your array elements :"<<endl;
   for(int i=0; i<n; i++){

        cout<<a[i]<<" ";

    }
    cout<<endl;
 

    cout<<"sorting in range :"<<endl;
    sort(a,a+(n-3));  //sort(start pointer, endpointer);

    for(int i=0; i<n; i++){

        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<"full sorting "<<endl;
    sort(a,a+n);

    for(int i=0; i<n; i++){

        cout<<a[i]<<" ";

    }
   

    cout<<endl;
    
    cout<<"sorting decending order :"<<endl;
    sort(a,a+n,greater<int>());

    for(int i=0; i<n; i++){

        cout<<a[i]<<" ";

    }



    
    return 0;
}