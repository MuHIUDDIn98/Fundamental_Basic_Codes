#include<stdio.h>
int main(){

   int ary[4]={1,2,3,4};
   int *p;
   printf("%p\n",p);
   p=ary+3;
   printf("%p\n",p);
   *p=5;
   printf("%d\n",ary[3]);
    return 0;
}