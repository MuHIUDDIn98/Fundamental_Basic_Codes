#include<stdio.h>
#include<string.h>


int main(){

     char str00[100001];
     int count[26];
     scanf("%s",str00);
     
     for(int i=0; i<strlen(str00); i++){
        int countValue = str00[i] - 'a';
         count[countValue]++;
     }

     for(int i=0; i<26; i++){
        if(count[i] !=0){
            printf("%c - %d\n",i+'a',count[i]);
        }
     }


    return 0;
}