#include<stdio.h>


int main(){
    int n;
    printf("Enter your array size :");
    scanf("%d",&n);
     int arr[n];
     printf("\n");
    printf("Enter your array elements :");
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }
     printf("\n");

     int arraySize=sizeof(arr)/4;
     for(int i=0; i<=arraySize-2; i++){
        for(int j=i+1; j<=arraySize-1; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
            
        }
     }

     printf("sorted array  :");
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
     }
    return 0;
}