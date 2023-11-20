#include<iostream>
using namespace std;
int main(){

    int array[]={1,23,24,33,34};
    int array1[5];
    
    cout<<"Element of array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";  
        array1[i]=array[i];
    }
    cout<<endl;

    cout<<"array1"<<endl;
    for(int i=0;i<5;i++){
    cout<<array1[i]<<" ";  

    }
    cout<<endl;
    cout<<"Incrementing "<<endl;
    for(int i=0;i<5;i++){
    cout<<++array1[i]<<" ";  
    }
    cout<<endl;
    cout<<"Decrementing "<<endl;
    for(int i=0;i<5;i++){
    cout<<--array1[i]<<" ";  
    }
    


    return 0;
}