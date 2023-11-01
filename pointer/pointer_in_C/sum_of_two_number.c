#include<stdio.h>


int sum(int *i, int *j){
    int sum = *i+*j;
    return sum;
}

int main(){

     int x,y;
     scanf("%d %d",&x,&y);
     printf("%d",sum(&x,&y));

    return 0;
}