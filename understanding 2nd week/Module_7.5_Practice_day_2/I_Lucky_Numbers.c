#include<stdio.h>
#include<string.h>


int main(){

     String num;
     scanf("%s",num);
     int digit_1 = num[0]-'0';
     int digit_2 = num[1] -'0';
     printf("%d ",digit_1);
     printf("%d",digit_2);
    return 0;
}