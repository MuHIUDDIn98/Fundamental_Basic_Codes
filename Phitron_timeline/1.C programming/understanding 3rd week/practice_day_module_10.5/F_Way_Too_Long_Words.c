#include<stdio.h>
#include<string.h>

int main(){

     int n;
     scanf("%d",&n);
     char c[101];
     for(int i =0; i<n; i++){
        scanf("%s",&c);
        if(strlen(c)<=10){
            printf("%s\n",c);
         }
         else{
            printf("%c%d%c\n",c[0],(strlen(c)-2),c[strlen(c)-1]);
         }
     }


   
    return 0;
}