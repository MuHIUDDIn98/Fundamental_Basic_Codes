#include<stdio.h>
int main(){

   char c;
   scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') printf("ALPHA\n IS CAPITAL\n");
    else if (c >= 'a' && c <= 'z') printf("ALPHA\n IS SMALL\n");
    else if(c >= '0' && c<='9')  printf("IS DIGIT\n");
    else  printf("others\n");
    
 
    return 0;
}