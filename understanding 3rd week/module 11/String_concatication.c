#include<stdio.h>
#include<string.h>

int main(){

     char s1[200]="", s2[100]="";
     scanf("%s %s",s1,s2);
    int s1_length = strlen(s1);

    for(int i=0; i<strlen(s2); i++){

        s1[s1_length] = s2[i];
        s1_length++;
    }

    printf("%s %s\n",s1,s2);

    
   //using function 
   scanf("%s %s",s1,s2);
   strcat(s1,s2);
   printf("%s %s\n",s1,s2);
    return 0;
}