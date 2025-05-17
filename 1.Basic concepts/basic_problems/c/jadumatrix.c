#include<stdio.h>
int main(){

   int jadu=1;
   int r,c;
   scanf("%d %d",&r,&c);
   int arr[r][c];
   for(int i=0;i<r;i++){
    for(int j=0; j<c;j++){
        scanf("%d",&arr[i][j]);
    }
   }


   for(int i=0;i<r;i++){
    for(int j=0; j<c;j++){

        if(i==j ){
            // printf("primary diagonal\n");
            // printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
            if(arr[i][j]!=1){
                // printf("primary  diabonal foreign component found\n");
                jadu=0;
            }
        }

        if(i+j==c-1){

            // printf("secondary diagonal\n");
            // printf("arr[%d][%d] = [%d] \n",i,j,arr[i][j]);
            if(arr[i][j]!=1){
                // printf("secondary foreign component found!!!!\n");
                jadu=0;
            }


        }
        if(i!=j && i+j!=r-1){
            // printf("out of primary and secondary diagonal\n");
            // printf("arr[%d] [%d] = %d\n",i,j,arr[i][j]);
            if(arr[i][j]!=0){
                // printf("foreign component found !!!!\n");
                jadu=0;
            }
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