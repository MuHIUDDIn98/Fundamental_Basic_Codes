#include<iostream>
using namespace std;

struct Array{

int A[10];
int size;
int length;

};

void Display(struct Array arr){
int i;
cout<<"Elements are :";
for(i=0;i<arr.length;i++){
  cout<<arr.A[i]<<" ";
}

cout<<endl;
}
//============Delete=====================
int Delete(struct Array *arr,int index){

   if(index>=0 && index<=arr->length){
    int x=arr->A[index];

    int i;
    for(i=index;i<arr->length-1;i++){
       arr->A[i]=arr->A[i+1];

    }
    arr->length--;
    return x;

   } 
   return 0;
}

int main(){

    struct Array arr={{1,2,3,4,5,6},10,6};
    Display(arr);
    int DeletedNum =Delete(&arr,5);
    Display(arr);
    cout<<"You have deleted "<<DeletedNum<<endl;
        DeletedNum =Delete(&arr,4);
    Display(arr);
    cout<<"You have deleted "<<DeletedNum;
    


}
