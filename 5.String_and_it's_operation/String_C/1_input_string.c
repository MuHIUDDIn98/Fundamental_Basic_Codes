#include<stdio.h>
#include<string.h>

int main(){

     char a[10];
     //scanf("%s",a);   //can't take input multiple word
     //gets(a);         //gets take over its capacity .it is risky  it is used to take string input (avoid to use in real application)
     fgets(a,7,stdin);  //fgets automatically put a null char at the end '\0' char print (n-1)
     printf("string : %s\nstring size : %d \narray size :%d\n",a,strlen(a),sizeof(a));
     
    return 0;
}

//give input between array range , above the array range (segmentation error ),