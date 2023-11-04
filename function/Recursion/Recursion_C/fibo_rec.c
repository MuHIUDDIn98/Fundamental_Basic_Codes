#include<stdio.h>


int main(){

     int n;
     scanf("%d",&n);
     int fibo = fibo_rec(n);
     printf("fibo of %d th term %d",n,fibo);
    return 0;
}