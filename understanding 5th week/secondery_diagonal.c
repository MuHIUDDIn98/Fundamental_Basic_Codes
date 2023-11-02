#include<stdio.h>
#include <stdbool.h>

int main(){
     //here diagonal elements must be greater than zero
     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     if(n!= m){
        printf("it can't be a diagonal matrix \n");
     }

     else{
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

      
        // diagonal matrix check
        
        bool diagonal = true;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(i+j== n-1){ // i+j == (row or col) -1
                    continue;
                }

                if( matrix[i][j] != 0 ){
                  diagonal = false;
                }
            }
        }


          if(diagonal){
            printf("this is a secondery diagonal matrix elements are : \n");
            
            //printing diagonal elements ....
            for(int i=0; i<n; i++){
              for(int j=0; j<m; j++){
                if(i+j == n-1 ){
                printf("%d  ",matrix[i][j]) ;
                }
              }
            }
          }
          else{
            printf("this is not a secondery diagola matrix\n");
          }

       
     }

     




    


    return 0;
}