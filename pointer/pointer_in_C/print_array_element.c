#include <stdio.h>

int main() {
   int arr[5]={11,22,33,44,55};
   printf("address of arr[0] :%p\n",&arr[0]);
   printf("address of arr[0] :%p\n",arr);
   printf("address of arr[1] :%p\n",arr+1);
   for(int i=0; i<5; i++){
    printf("index: %d value %d memAddr %p  memAddr_dec %d\n",i,*(arr+i),(arr+i),(arr+i));
    // arr[1] = *(arr+1) = 1[arr] similar
    // (arr+1) memory address of arr[1]
   }
    return 0;
}