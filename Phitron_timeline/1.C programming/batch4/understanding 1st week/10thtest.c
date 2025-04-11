#include<stdio.h>

int main(){

    int a, b, c;
    float x;
    double y;
    //input stream scanf ignores tab, space ,enter 
    //but when we use charecter it doesn't ignore tab ,space, enter


    // printf("Enter your Num1 and Num2:");
    // scanf("%d %d",&a,&b);   
    // printf("Enter your Num3:");
    // scanf("%d", &c);
    // printf("Num1: %.3d Num2: %.3d Num3: %.3d\n",a,b,c);


    // printf("Enter your float value :");
    // scanf("%f",&x);
    // printf("float num : %.2f",x);

    printf("Enter your float value :"); 
    scanf("%lf",&y);          //it is good practice to select double variable to show floating point
    printf("float num : %.2lf",y);
    
}

//padding....