#include<stdio.h>
int main(){

    char c='a';
    scanf("%c", &c);
    if(c>='a' && c<='z'){
        printf("%c\n", c-32);
    }
    else if(c>='A' && c<='Z'){
        printf("%c\n", c+32);
    }
    else{
        printf("Invalid input\n");
    }       
    return 0;
}