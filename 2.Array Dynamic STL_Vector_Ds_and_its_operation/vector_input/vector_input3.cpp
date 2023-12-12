#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    
    //two array decleration..
    int array1[10]={11,21,31,41,51,61,71,81,91,1100};
    int array2[10]={11,22,33,44,55,66,77,88,99,1100};
    
    //array length calculation..
    cout<<"array1 length "<<sizeof(array1)/4<<endl;
    cout<<"array2 length "<<sizeof(array2)/4<<endl;
    //insert array1 to v1
    for(int i=0; i<10; i++){
        v1.insert(v1.begin()+i,array1[i]);
    }
    //insert array2 to v2
    for(int i=0; i<10; i++){
        v2.insert(v2.begin()+i,array2[i]);
    }

    //printing v1
    cout<<endl;
    cout<<"vector v1 :"<<endl;
    for(int x:v1){
        cout<<x<<" ";
    }

    //printing v2
    cout<<endl;
    cout<<"vector v2 :"<<endl;
    for(int x:v2){
        cout<<x<<" ";
    }

    cout<<endl;
    //inserting vector v1 into v3
    
    cout<<"vector v3 :"<<endl;

    v3.insert(v3.begin(),v1.begin(),v1.end());
    cout<<"v3 size :" <<v3.size()<<endl;
    for(int x:v3){
        cout<<x<<" ";
    }
    //inserting vector v2 into v3
    v3.insert(v3.begin()+10,v1.begin(),v1.end());
    cout<<endl;
    //printing vector v3
    cout<<"v3 size :" <<v3.size()<<endl;
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;
    

    return 0;
}