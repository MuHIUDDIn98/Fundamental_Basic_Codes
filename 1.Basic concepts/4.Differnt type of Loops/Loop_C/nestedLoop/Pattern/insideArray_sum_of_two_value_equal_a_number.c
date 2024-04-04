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
     printf("Enter your summation value :");
     int sum;
     scanf("%d",&sum);

     int arraySize=sizeof(arr)/4;
     for(int i=0; i<=arraySize-2; i++){
        for(int j=i+1; j<=arraySize-1; j++){
            //printf("%d  %d\n",arr[i],arr[j]);

            if(arr[i]+arr[j] == sum){
                printf("%d + %d",arr[i],arr[j]);
                printf(" Yes\n");
            }
            
        }
     }
    return 0;
}