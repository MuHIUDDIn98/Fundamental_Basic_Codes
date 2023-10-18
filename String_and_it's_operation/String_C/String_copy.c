#include<stdio.h>
#include<string.h>


int main(){
    char s1[100]="apple", s2[100]="orange";

    char c1[200],c2[100];


    printf("%s\n",s1);
    for(int i=0; i<strlen(s2); i++){

        s1[i] = s2[i];
    }
  
    printf("%s",s1);
    printf("Enter your two string :");
    scanf("%s %s",c1,c2);
    strcpy(c1,c2);
    printf("%s %s",c1,c2);
     
    return 0;
}