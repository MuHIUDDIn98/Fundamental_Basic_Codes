#include<stdio.h>
void number_Print(int n){
    if(n == 0) return;
    
    number_Print(n-1);
    printf("%d\n",n);

    return;
}

int main(){

     
    int n;
    scanf("%d",&n);    
    number_Print(n);   
    return 0;
}