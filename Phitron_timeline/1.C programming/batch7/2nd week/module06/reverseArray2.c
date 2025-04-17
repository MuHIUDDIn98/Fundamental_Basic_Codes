#include<stdio.h>
int main(){

   int arraySize;
   int index;
   int val;
   scanf("%d", &arraySize);
    int array[arraySize];
    for(int i=0; i<arraySize; i++){
         scanf("%d", &array[i]);
    }
    scanf("%d", &index);
    scanf("%d", &val);
    array[index] = val;
    for(int i=arraySize-1; i>=0; i--){
         printf("%d ", array[i]);
    }


    return 0;
}