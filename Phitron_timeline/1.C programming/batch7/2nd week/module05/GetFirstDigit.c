#include<stdio.h>
int main(){

   int n;
   scanf("%d", &n);
    int firstDigit = n/1000;
    int lastDigit = n%1000;
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    if(firstDigit%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }

    return 0;
}