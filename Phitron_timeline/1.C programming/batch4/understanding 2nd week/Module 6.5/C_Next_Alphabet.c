#include<stdio.h>


int main(){

     char n;
     scanf("%c",&n);
     //printf("%d",n); //printing decimal value of ASCII  
     if(n =='z'){
        n = 'a';
     }  
     else if(n>='a'&& n <= 'y'){
        n++;
     }
     
     printf("%c\n",n);

    return 0;
}