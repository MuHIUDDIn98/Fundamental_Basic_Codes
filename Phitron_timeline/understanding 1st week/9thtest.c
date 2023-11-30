#include<stdio.h>

int main(){

    int a, b, c;
    //input stream scanf ignores tab, space ,enter 
    //but when we use charecter it doesn't ignore tab ,space, enter
    printf("Enter your Num1 and Num2:");
    scanf("%d/%d",&a,&b);
    
    printf("Enter your Num3\n:");
    scanf("%d", &c);
    printf("Num1: %d Num2: %d Num3: %d\n",a,b,c);
    
}

// enter 45/5 first and than 66 and observer after that enter 5 space 4 than observer 
