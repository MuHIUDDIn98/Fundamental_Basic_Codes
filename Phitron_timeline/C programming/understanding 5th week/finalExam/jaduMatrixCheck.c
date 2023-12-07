#include<stdio.h>
#include <stdbool.h>

int main(){
     int n,m;
     scanf("%d %d",&n,&m);
        int matrix[n][m];
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                printf("matrix[%d][%d]  :",i,j);
                scanf("%d",&matrix[i][j]);    
            }
        }

      
        // jadu check 
        
        bool jadu = true;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(i==j && matrix[i][j] != 1 ){      //primery diagonal 1 check
                  jadu=false;
                }
                if(i+j == n-1 && matrix[i][j] != 1){ // i+j == (row or col) -1 secondery diagonal 1 check 
                    jadu = false;
                }
                if(!(i==j) && !(i+j == n-1) && matrix[i][j] !=0){  //others element zero check 
                    jadu = false;
                }

            }
        }

         

          if(jadu){
            printf("YES\n");
          }
          else{
            printf("NO\n");
          }

       
    return 0;
}
