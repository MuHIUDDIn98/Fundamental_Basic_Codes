#include<bits/stdc++.h>
using namespace std;


int main(){


   int array[16] ={1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66};
    //copy from array to list
    list<int>mylist7(array,array+16);

    cout<<endl;
    cout<<"all element of mylist7"<<endl;
    //iterator
    for(auto it=mylist7.begin(); it!=mylist7.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl; 

    for(auto val : mylist7){
        cout<<val<<" ";
    }
return 0;
}