#include<stdio.h>
void printArray(int array[], int sz,int i){
    if(i==sz)return;
    printf("%d\n",array[i]);
    printArray(array, sz, i+1);
    printf("=====\n");
    printf("%d\n",array[i]);
}

int main(){
    int n;
     scanf("%d", &n);
     int array[n];
     for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
     }
     printArray(array,n,0);
    return 0;
}