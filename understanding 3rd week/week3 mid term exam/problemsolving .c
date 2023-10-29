#include <stdio.h>
#include<string.h>

int main() {
   int testCase;

   scanf("%d",&testCase);


   while(testCase--){
    int arraySize;
    int X_number;
    int value_found=-1;
    //taking array input
    scanf("%d",&arraySize);
    //declearing array size 
    int integer_array[arraySize];
    //inserting integer values into the array 
    for(int i =0; i<arraySize; i++){
        scanf("%d",&integer_array[i]);
    }
    //taking x input 
    scanf("%d",&X_number);

    for(int i=0; i<arraySize;i++){
        if(X_number == integer_array[i]){
            value_found = 1;
        }   
    }
    if(value_found == 1){
        printf("YES\n");
        value_found = -1;
    }
    else{
        printf("NO\n");
    }
     

    
   }
   
    return 0;
}