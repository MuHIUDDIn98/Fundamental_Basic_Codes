#include<stdio.h>
#include <stdbool.h>

int main(){
     //here diagonal elements must be greater than zero
     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     if(n!= m){
        printf("it can't be an unit matrix  you need to choose a square  matrix \n");
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

      
        // unity check ...
        
        bool unit = true;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(i==j){

                    if(matrix[i][j] != 1){
                       unit=false;

                    }
                continue;
                }

                if( matrix[i][j] != 0 ){
                  unit=false;
                }
            }
        }


          if(unit){
            printf("this is a unit matrix elements are : \n");
            
            //printing diagonal elements ....
            for(int i=0; i<n; i++){
              for(int j=0; j<m; j++){
                if(i==j ){
                printf("%d  ",matrix[i][j]) ;
                }
              }
            }
          }
          else{
            printf("this is not a unit matrix\n");
          }

       
     }

     




    


    return 0;
}