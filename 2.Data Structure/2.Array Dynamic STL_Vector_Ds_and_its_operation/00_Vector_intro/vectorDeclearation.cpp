#include<bits/stdc++.h>
using namespace std;

//standard template library
//Dynamic array background


int main(){
    //vector declearation
    vector<int> v;     //O(1)                    type 1
    cout<<v.size()<<endl;

    //declear with size
    vector<int> t(10);  //O(N)                   type 2
    cout<<t.size()<<endl;

    //declear with value common value -1
    vector<int> f(5,-1); //O(N)                  type 3

    for(int i = 0; i<f.size(); i++){
        cout<<f[i]<<" ";
    }


    cout<<endl;


    //vector initialization
    vector<int> v4 = {1,2,3,4,5};//               type 4
    for(int i = 0; i < v4.size(); i++){
        cout<<v4[i]<<" ";
    }


    cout<<endl;


    //declear and copy
    vector<int>v3(f);  //                         type 5
    for(int i=0; i< v3.size(); i++){
        cout<<v3[i]<<" ";
    }


    cout<<endl;

    //copy from array
    int arr[5] ={5,10,15,20,25};
    vector<int> ar(arr,arr+5);//                   type6
    for(int i=0; i< ar.size(); i++){
        cout<<ar[i]<<" ";
    }


   
return 0;
}