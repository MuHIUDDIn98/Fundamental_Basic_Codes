#include<stdio.h>
void number_Print(int n, int m){
    if(n > m) return;
    printf("%d\n",n);
    number_Print(n+1,m);

    return;
}

int main(){

     
    int n,m;
    scanf("%d %d",&n,&m);
    if(n<m){
        number_Print(n,m);
    }
    else{
        printf("You must enter first number less than second number!!!");
    }
    return 0;
}