#include<stdio.h>
#include<string.h>

int main(){

     char s[2000]="hello ";
     char p[1000]= "anik are you there";
     strcat(s,p);        //concat string using strcat()
     printf("%s",s);
    return 0;
}