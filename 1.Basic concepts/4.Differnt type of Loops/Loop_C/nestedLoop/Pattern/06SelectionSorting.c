#include<stdio.h>
int main(){

   int n;
   scanf("%d",&n);

   int arr[n];

   for(int i=0;i<n; i++){
    scanf("%d",&arr[i]);
   }

   printf("\n");

   for(int j=0;j<n; j++){
    printf("%d",arr[j]);
   }

   printf("\n");


   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }


   printf("asending order\n");

   for(int j=0;j<n; j++){
    printf("%d",arr[j]);
   }


   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }

   printf("\n");

   printf("Decending Order\n");

   for(int j=0;j<n; j++){
    printf("%d",arr[j]);
   }



    return 0;
}