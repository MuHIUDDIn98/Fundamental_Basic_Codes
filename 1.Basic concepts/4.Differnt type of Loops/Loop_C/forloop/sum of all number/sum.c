#include<stdio.h>

int main(){

long long int sum = 0;
long  n;
printf("Enter your number :");
scanf("%d",&n);
for(int i = 1; i<n; i++){
   sum +=i;
}
printf("sum of all numbers ");
printf("%lld",sum);

//  (n*(n+1))/2
}