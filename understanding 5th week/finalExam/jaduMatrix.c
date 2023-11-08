#include<stdio.h>
#include <stdbool.h>

int main(){
     //here diagonal elements must be greater than zero
     int n,m;
     
     //printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     if(n!= m){
        //printf("it can't be a diagonal,  you must enter an square matrix size !! \n");
     }

     else{
        int element=n*m;
        int matrix[n][m];
        //printf("Enter your %d matrix elements here :\n",element);
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                printf("matrix[%d][%d]  :",i,j);
                scanf("%d",&matrix[i][j]);    
            }
        }

        // printf("Your %d matrix elements are: \n",element);
        // for(int i=0; i<n; i++){

        //     for(int j=0; j<m; j++){
        //         printf("%d   ",matrix[i][j]);    
        //     }
        //     printf("\n");
        // }

      
        // jadu check 
        
        bool isJadu = true;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(i==j && matrix[i][j] != 1 ){      //primery check
                  isJadu=false;
                }
                if(i+j == n-1 && matrix[i][j] != 1){ // i+j == (row or col) -1 secondery check 
                    isJadu = false;
                }
                if(!(i==j) && !(i+j == n-1) && matrix[i][j] !=0){
                    isJadu = false;
                }

            }
        }

         

          if(isJadu){
            printf("YES\n");
          }
          else{
            printf("NO\n");
          }

       
     }

     




    


    return 0;
}