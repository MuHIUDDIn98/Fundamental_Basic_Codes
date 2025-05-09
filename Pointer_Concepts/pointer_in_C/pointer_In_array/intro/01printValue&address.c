#include<stdio.h>
int main(){

   int a=5;

   int *p = &a;
   printf("Memaddr 'a' = %p\n",&a);
   printf("memaddr 'a' = %p 'using ptr'\n",p);
   printf("MemAddr 'p' = %p\n",&p);

   //
   printf("Dereferencing = %d",*p);

    return 0;
}