#include<bits/stdc++.h>
using namespace std;

int * fun(){
    int n;
    cin>>n;
    int *ar = new int[n];
  
    for(int i=0; i<5; i++){
         cin>>ar[i];
    }
    return ar;
}

int main(){
    int *array = fun();
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}