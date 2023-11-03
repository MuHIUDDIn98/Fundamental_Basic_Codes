#include<stdio.h>
void printmsg(int i){
    if(i==0)return;
    printmsg(i-1);
    printf("%d\n",i);
   
}
 
int main(){
    int n;
     scanf("%d",&n);
    
     printmsg(n);
    return 0;
}