#include<bits/stdc++.h>
using namespace std;





int *func(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    return a;
}



int *func2(){
    int arr = new int[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    return a;
}






int main(){

    //dynamic memeory allocation
    int* x = new int;
    *x=20;

    cout<<*x<<endl;

    int n = 6;
    int *arr = new int[n];

    for(int i=0; i<n; i++){

        arr[i] = i*3;
    }
    cout<<"==========system==========="<<endl;
    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    // int *p = func();
    // for(int i=0; i<5; i++){
    //     cout<<p[i];
    // }


    int *pd = func2();
    for(int i=0; i<5; i++){
        cout<<pd[i];
    }



    return 0;
}