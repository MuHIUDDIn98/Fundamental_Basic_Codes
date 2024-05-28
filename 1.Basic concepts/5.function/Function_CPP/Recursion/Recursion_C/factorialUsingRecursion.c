#include<stdio.h>
long long int fact(int n){
    printf("%d",n);
    if(n==0){
        return 1;
    }
   long long int ans = fact(n-1);
   return ans*n;

}

int main(){

     int n;
     scanf("%d",&n);
     int factorial =  fact(n);
     printf("%d",factorial);
    return 0;
}