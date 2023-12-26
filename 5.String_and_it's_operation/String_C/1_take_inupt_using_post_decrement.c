#include<stdio.h>


int main(){

     int p;
     scanf("%d",&p);
     getchar();
     char s[100];
     while(p--){
        
        printf("%d\n",p);
        //scanf("%s",s);
        //gets(s); //gets take enter as input and assume that enter is a strig
        fgets(s,100,stdin);
        printf("%s",s);
     }
    return 0;
}