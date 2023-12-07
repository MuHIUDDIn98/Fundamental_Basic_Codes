#include<stdio.h>


int main(){

     char a;
     scanf("%c",&a);
     
     if(a>='A' && a<='Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
     }
     else if(a>='a' && a<='z'){
        printf("ALPHA\n");
        printf("IS SMALL");
     }
     else if(a>='0' && a<='9'){
        printf("IS DIGIT");
     }

    return 0;
}