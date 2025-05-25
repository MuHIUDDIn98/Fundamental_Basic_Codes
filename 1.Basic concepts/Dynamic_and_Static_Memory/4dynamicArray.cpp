#include<bits/stdc++.h>
using namespace std;

int * func(int n){
    
    int *x = new int[n];

    cout<<"Enter you array elements :"<<endl;
    for(int i=0;i<n; i++){

        cin>>x[i];
    }

    return x;

}


void printArray(int *a,int n){

   cout<<"Arry elements :"<<endl;
   for(int i=0;i<n;i++){

    cout<<a[i]<<endl;
   }

}


int main(){

    cout<<"Enter your array size :"<<endl;
    int n;
    cin>>n;
    int *p = func(n);

    printArray(p,n);

    delete[] p;

    printArray(p,n);

    return 0;
}