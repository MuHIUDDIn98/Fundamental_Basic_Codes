#include<stdio.h>
#include<limits.h>


int main(){

     int n;
     int max=INT_MIN;
     int min=INT_MAX;
     int max_index;
     int min_index;
     scanf("%d",&n);
     int a[n];
     for(int i =0; i<n; i++){
       scanf("%d",&a[i]);
     }

     for(int i =0; i<n; i++){
        if(a[i]>max){
            max = a[i];
            max_index = i;
        }
        
     }
     for(int i =0; i<n; i++){
        if(a[i]<min){
            min = a[i];
            min_index = i;
        }
     }

     int temp = a[max_index];
     a[max_index] = a[min_index];
     a[min_index] = temp;

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }


    return 0;
}