#include<stdio.h>
#include <stdbool.h>

int main(){

     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     int element=n*m;
     int matrix1[n][m],matrix2[n][m],sum[n][m];
     printf("Enter your %d matrix1 elements here :\n",element);
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            printf("matrix1[%d][%d]  :",i,j);
            scanf("%d",&matrix1[i][j]);    
        }
     }
     printf("Your %d matrix1 elements are: \n",element);
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            printf("%d   ",matrix1[i][j]);    
        }
        printf("\n");
     }


     printf("Enter your %d matrix2 elements here :\n",element);
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            printf("matrix2[%d][%d]  :",i,j);
            scanf("%d",&matrix2[i][j]);    
        }
     }

     printf("Your %d matrix2 elements are: \n",element);
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            printf("%d   ",matrix2[i][j]);    
        }
        printf("\n");
     }

     
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            sum[i][j] = matrix1[i][j]+matrix2[i][j];    
        }
     }
     

     printf("Your %d sum elements are: \n",element);
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d  ",sum[i][j]);    
        }
        printf("\n");
     }


    return 0;
}