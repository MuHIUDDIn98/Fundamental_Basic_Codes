#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1(10);
    vector<int>v2 = {12,13,14,15,16};

    for(int i=0; i<10; i++){
        v1.insert(v1.begin()+i,i+2);
    }
   
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<" v1 new size: "<<v1.size()<<endl;
    for(int i=10; i<20; i++){
        v1.insert(v1.begin()+i,i+1);
    }
    
    cout<<" v1 new size: "<<v1.size()<<endl; 
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+2,500);
     for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    //copy vector element v2 in v1
    v1.insert(v1.begin()+5,v2.begin(),v2.end());
    for(int x:v1){
        cout<<x<<" ";
    }
    //erease 
    v1.erase(v1.begin()+5);
    cout<<endl;
    for(int x:v1){
        cout<<x<<" ";
    }
    //erease using end pointer...
    cout<<endl;
    v1.erase(v1.end()-20);
    for(int x:v1){
        cout<<x<<" ";
    }


    return 0;
}