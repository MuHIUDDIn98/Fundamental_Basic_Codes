#include<stdio.h>

int main(){

    int a,x;
    float b;
    double y;


    // printf("Enter your Num1 and Num2:");
    // scanf("%d %f",&a,&b);   
    // y = a/b;
    // printf("%.3lf",y);

    printf("Enter your Num1 and Num2:");
    scanf("%d %d",&a,&x);   
    y = a/(x*1.0);  // hete x is a integer type casting using multiply by 1.0 operetor precedence ***
    printf("%.3lf",y);
}
