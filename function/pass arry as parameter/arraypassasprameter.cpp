#include<iostream>
using namespace std;


printArray(int arr[], int siz){
cout<<"array elements are :"<<endl;
for(int x =0; x<siz; x++){
    cout<<arr[x] <<" ";
}

}


int main(){

int arr[]={1,3,4,5,3,4,5,56,4};
printArray(arr,4);


}
