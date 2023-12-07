#include<stdio.h>

double powerfunc(double b,int e){
    if(e==0) return 1;
    return b*powerfunc(b,e-1);
}

int main(){
int base,exponent;
printf("What is the base?\n");
scanf("%d",&base);
printf("what is the exponent\n");
scanf("%d",&exponent);
long power = powerfunc(base,exponent);
printf(" %d raised to the power %d is %ld",base,exponent,power);


}