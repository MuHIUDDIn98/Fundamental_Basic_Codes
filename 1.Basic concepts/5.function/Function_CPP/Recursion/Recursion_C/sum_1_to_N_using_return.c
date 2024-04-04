#include<stdio.h>
//https://www.youtube.com/watch?v=Bd-1YM8taBc&t=1131s

int summation(int n){

    if(n==1 || n==0) return 1;
    return n+summation(n-1);

}

int main(){

     int n;
     scanf("%d",&n);

     int sum = summation(n);
     printf(" summation  of 1 to  %d is :%d",n,sum);
    return 0;
}