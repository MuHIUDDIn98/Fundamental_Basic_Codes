#include<stdio.h>
#include<string.h> //if we use gets() we need to include string library


int main(){

     char with_space[18]; // be aware allocaton of memory  **run time error or **segmentation fault windows can allocate extra memory but linux and online compiler doesn't support it
    gets(with_space);  //it doesn't take "Enter" as a input
    printf("%s\n",with_space); 
    printf("Enter your input using fgets() \n");
    fgets(with_space,18,stdin);  //it take enter as input=== fgets(arryname, size, stdin)==== size=char+null
    printf("%s",with_space);   //it automatically add a null after the string
    return 0;
}