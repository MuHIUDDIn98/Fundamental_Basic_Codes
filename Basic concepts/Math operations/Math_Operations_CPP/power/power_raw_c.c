#include<stdio.h>

double powerfunc(double b,int e){

    double result=1;
  for(int i= 0;i< e;i++){
   result=result*b; 
  } 

 return result;
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