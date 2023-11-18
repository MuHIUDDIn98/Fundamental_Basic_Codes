#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *D_Array = new int[n]; //dynamic memory array
    for(int i=0; i<n; i++ ){
        cin>>D_Array[i];
    }

    for(int i=0; i<n; i++ ){
        cout<<D_Array[i]<<" ";
    }
    delete [] D_Array; //deleting from heap

    return 0;
}