#include<iostream>
using namespace std;
//==========arrayOfStructure===================//
struct Array{

int A[10];
int size; 
int length;

};
//============Display=================//
void Display(struct Array arr){
int i;
cout<<"Elements are :";
for(i=0;i<arr.length;i++){
  cout<<arr.A[i]<<" ";
}

cout<<endl;
}
//===========Get array element================//
int Get(struct Array arr, int index){
if(index>=0 && index<arr.length)
    return arr.A[index];
return -1;

}
//=================Maximum element============//
int Max(struct Array arr){
  int max=arr.A[0];
  int i;
  for(i=1;i<arr.length;i++){
     if(arr.A[i]>max)
        max=arr.A[i];

  }

 return max;


}

//=============swap element===================//
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
//=================Minimum======================//
int Min(struct Array arr){
  int min=arr.A[0];
  int i;
  for(i=1;i<arr.length;i++){
     if(arr.A[i]<min)
        min=arr.A[i];

  }

 return min;


}
//===============set element=====================//
void Set(struct Array *arr,int index,int x){
  if(index>=0 && index<arr->length)
     arr->A[index]=x;

}
//===================sum of all element================//
int Sum(struct Array arr){
int s=0;
int i;
for(i=0;i<arr.length;i++){

    s+=arr.A[i];
}
return s;
}
//=================average of all element ================//
float Avg(struct Array arr){

    return (float)Sum(arr)/arr.length;
}

//=====================Reverse element using heap array =================//
void Reverse(struct Array *arr){

  int *p;
  int i,j;
  p=new int[arr->length];
  for(i=arr->length-1,j=0;i>=0;i--,j++)
      p[j]=arr->A[i]; 

  for(i=0;i<arr->length;i++)
    arr->A[i]=p[i];


}
//============Reversing element without creating array ======================//
void Reverse2(struct Array *arr)
{
 int i,j;
 for(i=0,j=arr->length-1;i<j;i++,j--)
 {
 swap(&arr->A[i],&arr->A[j]);
 }

}

int main(){
struct Array arr1={{1,2,3,4,5,6},10,6};
 Display(arr1);
cout<<"Maximum number :"<<Max(arr1)<<endl;
cout<<"Minimum number :"<<Min(arr1)<<endl;
Set(&arr1,0,44);
Display(arr1);
cout<<"Maximum number :"<<Max(arr1)<<endl;
cout<<"Sum of array :"<<Sum(arr1)<<endl;
cout<<"Average of Array :"<<Avg(arr1)<<endl;
Reverse(&arr1);
Display(arr1);
Reverse2(&arr1);
Display(arr1);

}