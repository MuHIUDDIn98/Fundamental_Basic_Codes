#include<stdio.h>


int main(){

     int n,m;
     scanf("%d",&n);
     
     int arr[n];
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }

     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
     }
     printf("\n");

    scanf("%d",&m);

     int arr1[m];
     for(int i=0; i<m; i++){
        scanf("%d",&arr1[i]);
     }
    
    int answer[n+m];
    //arr[n] copy to answer[n+m]
    for(int i=0; i<n; i++){
        answer[i] = arr[i];
     }

     int i = n;
     //arr1[n] copy to answer[n+m]
     for(int j=0; j < m; j++){
        answer[i] = arr1[j];
        i++;
     }
    //printing all element of answer array
    for(int i=0; i<n+m; i++){
            printf("%d ",answer[i]);
        }

    return 0;
}