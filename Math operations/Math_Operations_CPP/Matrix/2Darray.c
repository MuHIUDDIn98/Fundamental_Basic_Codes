#include<stdio.h>

int main(){

    int arr2d[5][4]={0};
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr2d[i][j]);
        }
    }

     for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            printf("arr2d [%d][%d]=%d  ",i,j,arr2d[i][j]);
        }
        printf("\n");
    }

    for(int k=0; k<4; k++){
        printf("arr2d[2][%d]=%d   ",k,arr2d[2][k]);
    }
}