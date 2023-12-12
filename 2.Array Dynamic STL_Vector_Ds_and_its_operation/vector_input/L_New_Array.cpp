#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    
    int n;
    cin>>n;
    //two array decleration..
    int array1[n];
    int array2[n];

    //array1 element insertion..
    for(int i=0; i<sizeof(array2)/4; i++){
        cin>>array1[i];
    }
    for(int i=0; i<sizeof(array2)/4; i++){
        cin>>array2[i];
    }
    //insert array1 to v1
    for(int i=0; i<sizeof(array2)/4; i++){
        v1.insert(v1.begin()+i,array1[i]);
    }
    //insert array2 to v2
    for(int i=0; i<10; i++){
        v2.insert(v2.begin()+i,array2[i]);
    }

    //inserting vector v1 into v3
    v3.insert(v3.begin(),v2.begin(),v2.end());
    //inserting vector v2 into v3
    v3.insert(v3.begin()+(sizeof(array2)/4),v1.begin(),v1.end());
    //printing vector v3
    for(int i=0; i<(sizeof(array1)/4)*2; i++){
        if(i<(sizeof(array1)/4)*2){
           cout<<v3[i]<<" ";
        }
        else{
            cout<<v3[i];
        }
        
    }
    

    return 0;
}