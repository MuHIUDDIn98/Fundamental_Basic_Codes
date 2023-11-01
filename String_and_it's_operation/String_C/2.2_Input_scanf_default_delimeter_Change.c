#include<stdio.h>


int main(){

     char a[100];
    //  scanf("%s",&a);// here a is a pointer of string a[100]
    //  printf("%s",a); //scanf default delemerter in white space( ' ' )

    //  scanf("%[^\n]s",a); //default delemeter change with '\n' new line.
    // if you want to use scanf you must need to know the size of the string exactly
    //  printf("%s",a);

     scanf("%[^#]s",a); //default delemeter change with '#'  
     printf("%s",a);
    return 0;
}