#include<stdio.h>


int main(){
   int n;
   scanf("%d",&n);
   for(int i = 1; i<=n; i++){
        int a;
        scanf("%d",&a);
        do{
        int r = a%10;
        printf("%d ",r);
        a/=10;
        }
        while(a != 0);
        printf("\n");
   }
    return 0;
}