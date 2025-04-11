#include<stdio.h>
#include <stdbool.h>

int main(){
     int n,m;
     
     scanf("%d %d",&n,&m);
     if(n!= m){
        printf("NO\n");
     }

     else{
        int matrix[n][m];
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                scanf("%d",&matrix[i][j]);    
            }
        }
      
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
