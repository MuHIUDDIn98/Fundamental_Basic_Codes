#include<stdio.h>
int main(){

   int arr[6]={45,46,47,48};
   int *ptrarr = arr;
   printf("address %d\n",arr);
   printf("address %p\n",arr);
   printf("address %p\n",ptrarr);
   printf("[0] address %p  0 index value %d \n",arr,*arr);
   printf("[0] address %p  0 index value %d \n",ptrarr,*ptrarr);
   printf("[1] address %p  1 index value %d \n",arr+1,*arr+1);
   printf("[1] address %p  1 index value %d \n",ptrarr+1,*ptrarr+1);
   printf("[2] address %p  2 index value %d \n",arr+2,*arr+2);
 
    


    return 0;
}