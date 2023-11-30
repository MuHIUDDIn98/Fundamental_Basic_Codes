#include<stdio.h>


int main(){
    int testCase;
    scanf("%d",&testCase);
     while(testCase--){
       int sz;
       scanf("%d",&sz);
       int arrayA[sz];
       for(int i=0; i<sz; i++){
        scanf("%d",&arrayA[i]);
       }
    
       int arrayB[sz];

       for(int i=0; i<sz; i++){
           arrayB[i] = arrayA[i];        
            
        }

       for(int i=0; i<=sz-2; i++){
            for(int j=i+1; j<=sz-1; j++){
                if(arrayB[i]>arrayB[j]){
                    int temp = arrayB[i];
                    arrayB[i]=arrayB[j];
                    arrayB[j] = temp;
                }            
            }
        }

        int arrayC[sz];

        for(int i=0; i<sz; i++){
            if(arrayA[i]-arrayB[i]<0){
                arrayC[i] = (arrayA[i]-arrayB[i])*-1;
            }
            else{
                arrayC[i] = arrayA[i]-arrayB[i];
            }
          
            
        }

      for(int i=0; i<sz; i++){
          printf("%d ",arrayC[i]);           
        }
        printf("\n");

     }
    return 0;
}