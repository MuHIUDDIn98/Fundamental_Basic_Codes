#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int T;
    scanf("%d",&T);
     
    while(T--){
        int Asize;
        scanf("%d",&Asize);
        int arrA[Asize];
        int arrB[Asize];
        int arrC[Asize];
        
        for(int i=0;i<Asize;i++){
            
            scanf("%d",&arrA[i]);
            arrB[i]=arrA[i];
            
        }
        
        for(int i=0;i<Asize-1;i++){
            for(int j=i+1;j<Asize;j++){
                if(arrB[i]>arrB[j]){
                    int temp;
                    temp = arrB[i];
                    arrB[i] = arrB[j];
                    arrB[j] = temp;

                }
            }
        }
        for(int i=0;i<Asize;i++){
           printf("%d ",arrB[i]);
        }

        printf("\n");
        for(int i=0;i<Asize;i++){
            arrC[i]=abs(arrA[i]-arrB[i]);
            printf("%d ",arrC[i]);
        }
        
        
    }
    return 0;
}
