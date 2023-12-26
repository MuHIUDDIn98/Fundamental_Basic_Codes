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



   //specific index print

   char a1[200],a2[100];
   printf("Enter your two strings :");
   scanf("%s %s",a1,a2);
   int a1_length = strlen(a1);
   for(int i=0; i<3; i++){

        a1[a1_length] = a2[i];
        a1_length++;
    }
    a1[a1_length] = '\0';

    printf("%s %s\n",a1,a2);


    return 0;
}