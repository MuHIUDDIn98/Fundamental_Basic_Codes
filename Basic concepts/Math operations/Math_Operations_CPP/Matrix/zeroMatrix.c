#include<stdio.h>
#include <stdbool.h>

int main(){

     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     int element=n*m;
     int matrix[n][m];
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

     //zero matrix check
     int zero_flag=0;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(matrix[i][j]==0){
            zero_flag++;
           } 
        }
     }
      if(zero_flag! = element){
        printf("Not zero matrix\n");
      }
      else{
        printf("zero matrix\n");
      }
    


    return 0;
}