#include<stdio.h>
void printmsg(int i){
    if(i==0)return;
    if(i==1){
        printf("%d",i);
    }
    else{
        printf("%d ",i);
    }
    printmsg(i-1);

   
}
 
int main(){
    int n;
     scanf("%d",&n);
    
     printmsg(n);
    return 0;
}