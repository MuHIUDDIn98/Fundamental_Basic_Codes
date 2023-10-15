#include<stdio.h>


int main(){

     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }
     
     int temp , i = 0, j = n-1 ;
     
     while(i<j){

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
     }
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
     }
     arr[100] = 80;

    return 0;
}