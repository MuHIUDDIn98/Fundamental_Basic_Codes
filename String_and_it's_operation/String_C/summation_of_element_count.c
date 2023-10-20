#include<stdio.h>
#include<string.h>


int main(){

     char s[1000001];
    scanf("%s",s);
    for(int i=0;i<strlen(s); i++){
      printf("%d ",s[i]);
    }
    printf("\n");
     int sum = 0;
     for(int i=0; i<strlen(s); i++){
        printf("%d ",(s[i]-'0'));
        sum=sum+(s[i]-'0');  //s[i] - ''0' converting char into number 

     }
     printf("\n");
     printf("%d",sum);
    return 0;
}