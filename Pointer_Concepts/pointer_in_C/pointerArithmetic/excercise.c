#include<stdio.h>
int main(){

   int num = 30;
   int *p;
   printf("%d\n",num);
   p=&num;
   printf("%p\n",&num);// do they print the same address?
   printf("%p\n", p);// do they print the same address?
   printf("%p\n", &p);// do they print the same address?
   *p=300;
   printf("%d\n",num);

    return 0;
}