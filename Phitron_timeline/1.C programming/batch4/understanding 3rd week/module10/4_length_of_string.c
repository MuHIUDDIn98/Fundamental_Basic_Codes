#include<stdio.h>
#include<string.h>


int main(){
     int count=0;
     char str[100];
     scanf("%s",str);

     for(int i=0; str[i] != '\0'; i++){
        count++;
     }

     int string_length = strlen(str);

     printf("%d\n",count);
     
     printf("%d\n",string_length);
    return 0;
}