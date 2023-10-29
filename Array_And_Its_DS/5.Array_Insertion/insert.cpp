#include<iostream>
using namespace std;

struct Array{

int A[10];
int size;
int length;

};
//==============Forward display========================
void F_Display(struct Array arr){
int i;
cout<<"Elements are :";
for(i=0;i<arr.length;i++){
  cout<<arr.A[i]<<" ";
}

cout<<endl;
}
//================================Reverse display===============
void R_Display(struct Array arr){


cout<<"Elements are :";
int i;
for(i=arr.length-1;i>=0;i--){
  cout<<arr.A[i]<<" ";
}
cout<<endl;
}
//==================================append========================
void Append(struct Array *arr,int x){
  cout<<endl;
  if(arr->length<arr->size){
   arr->A[arr->length++]=x;
  }
  cout<<endl;
}
//--------------insert------------------------
void insert(struct Array *arr,int index,int x){

  if(index>=0 && index <=arr->length){
   
   for(int i=arr->length;i>index;i--){
    arr->A[i]=arr->A[i-1];
    

   }
   arr->A[index]=x;
   arr->length++;
   

  }
  else{

    cout<<"index invalid "<<endl;
   }
}

int main(){
struct Array arr ={{2,3,4,5,6},10,5};
F_Display(arr);

R_Display(arr);

cout<<"Array Size :"<<arr.size<<endl;
cout<<"Array length :"<<arr.length<<endl;
Append(&arr,55);
F_Display(arr);
insert(&arr,2,444);
cout<<"Afer inserting :"<<endl;
F_Display(arr);

cout<<"Array Size :"<<arr.size<<endl;
cout<<"Array length :"<<arr.length<<endl;

insert(&arr,0,4999);
cout<<"Afer inserting :"<<endl;
F_Display(arr);

cout<<"Array Size :"<<arr.size<<endl;
cout<<"Array length :"<<arr.length<<endl;


// struct Array arr1 ={{2,3,4,5,6,7,8,9},10,8};
// Display(arr1);
// cout<<endl;
// Ddisplay(arr1);
// cout<<endl;
// cout<<"Array Size :"<<arr1.size<<endl;
// cout<<"Array length :"<<arr1.length<<endl;

return 0;

}