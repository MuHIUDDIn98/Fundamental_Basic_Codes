#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //creating two dynamic array 
    int *arr = new int[n];
    int *copy_arr = new int[n];
    //take input into the dynamic array and copy to copy array
    for(int i=0; i<n; i++){
        cin>>arr[i];
        copy_arr[i] = arr[i];
    }
    delete [] arr;
    cout<<"printing size of array :"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //new array size 
    int m;
    cout<<"give your new array size: "<<endl;
    cin>>m;
    arr = new int[m];
   //exchange array value 
    for(int i=0; i<n; i++){
        
        arr[i] = copy_arr[i];
    }
    delete[] copy_arr; //deleting array from heap
    
    //extra element..
    cout<<"Enter your extra elements in arr :"<<endl;
    for(int i=n; i<m; i++){
        cin>>arr[i];
    }

    for(int i=0; i<m; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}