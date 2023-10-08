#include<iostream>
using namespace std;

struct Array{

int A[10];
int size;
int length;

};

void swap(int *x,int *y){

int temp;
temp=*x;
*x=*y;
*y=temp;

}
void Display(struct Array arr){
int i;
cout<<"Elements are :";
for(i=0;i<arr.length;i++){
  cout<<arr.A[i]<<" ";
}
cout<<endl;
}
int LinearSearch(struct Array arr,int key){

    for (int i=0;i<arr.length;i++){

       if(arr.A[i]==key)
         return i;
             
    }

  return -1;
}

int MLinearSearch(struct Array *arr,int key){
  for (int i=0;i<arr->length;i++){

       if(arr->A[i]==key)
       {swap(&arr->A[i],&arr->A[i-1]);
         return i;
         }
             
    }

  return -1;

}

int main(){
 struct Array arr1 = {{1,2,3,4,5,6},10,6};
 Display(arr1);
 cout<<"Element found in index :"<<LinearSearch(arr1,6)<<endl;
 cout<<"Element found in index :"<<LinearSearch(arr1,16)<<endl;
 Display(arr1);
 cout<<"Element found in index :"<<MLinearSearch(&arr1,6)<<endl;
 Display(arr1);
 cout<<"Element found in index :"<<MLinearSearch(&arr1,5)<<endl;
 Display(arr1);
 
 cout<<"Element found in index :"<<MLinearSearch(&arr1,3)<<endl;
  Display(arr1);
}