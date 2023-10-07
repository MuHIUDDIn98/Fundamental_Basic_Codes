#include<stdio.h>

int main(){

    int a, b, c;
    //input stream scanf ignores tab, space ,enter 
    //but when we use charecter it doesn't ignore tab ,space, enter
    printf("Enter your Num1:");
    scanf("%d",&a);
    printf("Enter your Num2:");
    scanf("%d", &b);
    printf("Enter your Num3:");
    scanf("%d", &c);
    printf("Num1: %d Num2: %d Num3: %d\n",a,b,c);
    
}

//enter 22 space 44 and observe