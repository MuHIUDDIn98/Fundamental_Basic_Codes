#include<stdio.h>


int main(){

     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }

    //  for(int i=0; i<n; i++){
    //     printf("%d ",arr[i]);
    //  }

     int divisble_by_2_counter=0;
     int divisible_by_3_counter=0;

     for(int i=0; i<n; i++){
        if((arr[i]%2 == 0) && (arr[i]%3 == 0)){
            divisble_by_2_counter++;
            continue;           
        }
        else if(arr[i]%2 == 0){
                divisble_by_2_counter++;
        }
        if(arr[i]%3 == 0){
            divisible_by_3_counter++;
        }

        
     }

     printf("%d %d",divisble_by_2_counter,divisible_by_3_counter);
    return 0;
}