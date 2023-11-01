#include<stdio.h>


int main(){

     char a;
     scanf("%c",&a);
     if(a>64 && a<97){
        char b = a+32;
        printf("%c",b);
     }
     else if(a>96 && a<123){
        char b = a-32;
        printf("%c",b);
     }

    return 0;
}