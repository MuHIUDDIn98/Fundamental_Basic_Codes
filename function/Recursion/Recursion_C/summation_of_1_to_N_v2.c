#include<stdio.h>

int sum(int n){
    if(n==0) return 0;
    int totalsum = sum(n-1);
    return totalsum + n;
}
int main(){

     int n;
     scanf("%d",&n);
     int summation = sum(n);
     printf("%d",summation);
    return 0;
}