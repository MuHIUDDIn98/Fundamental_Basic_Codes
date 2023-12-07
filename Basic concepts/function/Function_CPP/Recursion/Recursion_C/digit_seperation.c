#include<stdio.h>
void digit_printing(int n){

    if(n==0) return;
    int x=n%10;
    digit_printing(n/10);
    printf("%d ",x);
}

int main(){

     int n;
     scanf("%d",&n);

     digit_printing(n);
    return 0;
}