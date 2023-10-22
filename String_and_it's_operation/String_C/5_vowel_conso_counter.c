#include<stdio.h>
#include<string.h>
int main(){

     char s[1000001];
     int vowel_count=0;
     int consonenet_count=0;
     scanf("%s",s);
     for(int i=0; i<strlen(s); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i' || s[i]=='o'|| s[i]=='u'){
         vowel_count++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            consonenet_count++;
        }
     }

     printf("%d\n",consonenet_count);


    return 0;
}