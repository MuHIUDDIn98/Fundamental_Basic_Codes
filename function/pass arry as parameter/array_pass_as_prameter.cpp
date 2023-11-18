#include<iostream>
using namespace std;


// void printArray(int arr[], int siz){ // here arr[] is a pointer it is passed by address  and int size is passed by value
// cout<<"array elements are :"<<endl;
// for(int x =0; x<siz; x++){
//     cout<<arr[x] <<" ";
// }

// }

void printArray(int *arr ,int size){   //int *arr works as pointer to both integer and  array (always pass by address)
for(int i =0; i<size; i++){
    cout<<arr[i] <<" ";
}

}

//

int main(){

int arr[]={1,3,4,5,3,4,5,56,4};
printArray(arr,8);


return 0;


}
