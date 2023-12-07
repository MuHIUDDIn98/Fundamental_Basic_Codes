#include<stdio.h>


int main(){

     int n,num,pos = -1;
     scanf("%d",&n);
     int arr[n];
     for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
     }

     scanf("%d",&num);

     for(int i = 0; i<n; i++){
        if(arr[i] == num){
            pos = i;
            break;
        }       
     } 
        printf("%d\n",pos);
    
     return 0;
}