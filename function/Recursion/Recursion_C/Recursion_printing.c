#include<stdio.h>
void printmsg(int i){
    if(i==0)return;
    //  printf("%d\n",i);
    printmsg(i-1);
    // printf("%d\n",i);
    printf("I love Recursion\n");
}

int main(){
    int n;
     scanf("%d",&n);
    
     printmsg(n);
    return 0;
}