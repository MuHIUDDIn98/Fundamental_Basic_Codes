#include<stdio.h>
#include<string.h>


int main(){

     char str1[100]="hello"; //whenever we have information about string what is the size of string we can use scanf()

     printf("%s\n",str1);

     strcpy(str1,"geloo");  //assigning a string to anaother string is same as copy

     printf("%s\n",str1);


     char str2[19]="anik";
     printf("%s\n",str2);    //strncpy() doesn't add null after string 
                             //we need to add manually null char  '\0'
     strncpy(str2,"anik is a good boy",5);
     printf("%s\n",str2);
     strncpy(str2,"anik is a good boy",10);
     printf("%s\n",str2);
     strncpy(str2,"anik is a good boy",15);
     printf("%s\n",str2);
     strncpy(str2,"anik is a good boy",16);
     printf("%s\n",str2);
     strncpy(str2,"anik is a good boy",17);
     printf("%s\n",str2);
     strncpy(str2,"anik is a good boy",18);
     printf("%s\n",str2);
     printf("%d\n",strlen(str2));
    return 0;
}