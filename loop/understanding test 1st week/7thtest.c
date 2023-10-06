#include<stdio.h>

int main(){

    int a, b;
    //input stream scanf ignores tab, space ,enter 
    //but when we use charecter it doesn't ignore tab ,space, enter
    scanf("%d %d",&a, &b);
    printf("Num1: %d Num2: %d\n",a,b);
}