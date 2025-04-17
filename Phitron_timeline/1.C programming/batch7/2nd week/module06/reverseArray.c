#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int ArraySize;
    scanf("%d",&ArraySize);
    int Array[ArraySize];

    for(int i=0;i<ArraySize;i++){
        scanf("%d",&Array[i]);
    }
    
    for(int i=ArraySize-1;i>=0;i--){
        if(i%2!=0){
            printf("%d ",Array[i]);
        }
    }
    return 0;
}