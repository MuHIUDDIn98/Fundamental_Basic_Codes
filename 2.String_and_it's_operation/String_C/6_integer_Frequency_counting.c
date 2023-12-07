#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
     int arr[n];
     int count[100]={0};
     //take array input 
     for(int i=0; i<n; i++){

        scanf("%d",&arr[i]);
     }

     //printing array
     for(int i=0; i<n; i++){

        printf("%d ",arr[i]);
     }

     printf("\n");

    //counting elements of array
    for(int i=0; i<n; i++){
        count[arr[i]]++;            //here is the important concept
    }
   
    //printing counted number in array
    for(int i=0; i<=n; i++){

        if(count[i]>0){
          printf("%d - %d\n",i,count[i]);
        }
    }
    return 0;
}