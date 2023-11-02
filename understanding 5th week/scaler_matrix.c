#include<stdio.h>
#include <stdbool.h>

int main(){
     //here diagonal elements must be greater than zero
     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     if(n!= m){
        printf("it can't be a scaler matrix \n");
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

      
        // scaler matrix check
        
        bool scaler = true;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(i==j){

                   if(matrix[i][j] != matrix[0][0])
                    {scaler =false;
                    }


                  continue;
                }

                if( matrix[i][j] != 0 ){
                  scaler = false;
                }
            }
        }


          if(scaler){
            printf("this is a scaler matrix elements are : \n");
            
            //printing scaler elements ....
            
            for(int i=0; i<n; i++){
              for(int j=0; j<m; j++){
                if(i == j ){
                printf("%d  ",matrix[i][j]) ;
                }
              }
            }
          }
          else{
            printf("this is not a scaler  matrix\n");
          }

       
     }


    return 0;
}