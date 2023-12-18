#include<stdio.h>
#include <stdbool.h>

int main(){

     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     int matrix[n][m];
     int element = m*n;
     printf("Enter your %d matrix elements here :\n",element);
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            printf("matrix[%d][%d]  :",i,j);
            scanf("%d",&matrix[i][j]);    
        }
     }


     printf("Your %d matrix elements are: \n",element);
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            printf("%d   ",matrix[i][j]);    
        }
        printf("\n");
     }

    printf("Your %d matrix  mirror printing are: \n",element);
     for(int i=0; i<n; i++){

        for(int j=m-1; j>=0; j--){
            printf("%d ",matrix[i][j]);    
        }
        printf("\n");
     }

   


    return 0;
}