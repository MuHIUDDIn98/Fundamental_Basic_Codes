#include<stdio.h>
int main(){

    char c='a';
    char b  = 'A';
    printf("%c\n",c);
    printf("%c\n",b);
    printf("%d\n",c);
    printf("%d\n",b);
    printf("%c\n",c-32);
    printf("%c\n",b+32);
    printf("lowerase latter range a to z: %d-%d\n", 'a', 'z');
    printf("uppercase latter range A to Z: %d-%d\n", 'A', 'Z');
    printf("difference between a lowercase and uppercase letter: %d\n", 'a'-'A');
    return 0;
}