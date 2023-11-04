#include<stdio.h>
//https://www.youtube.com/watch?v=Bd-1YM8taBc&t=1131s

int factorial(int n){

    if(n==1 || n==0) return 1;
    return n*factorial(n-1);

}

int main(){

     int n;
     scanf("%d",&n);

     int fact =factorial(n);
     printf(" factorial of %d is :%d",n,fact);
    return 0;
}