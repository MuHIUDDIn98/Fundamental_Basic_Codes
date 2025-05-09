#include<stdio.h>
int main(){

   int num1=12;
   int num2 = 13;
   int *ptr1,*ptr2;
   ptr1=&num1;
   ptr2=&num2;

   printf("num1 = %d, num2 = %d\n",num1,num2);
   printf("num1 = %d, num2 = %d\n",*ptr1,*ptr2);
   printf("num1 = %d, num2 = %d\n",&num1,&num2);
   printf("num1 = %p, num2 = %p\n",&num1,&num2);
   printf("num1 = %p, num2 = %p\n",ptr1,ptr2);
   printf("num1 = %p, num2 = %p\n",&ptr1,&ptr2);//pointer address
   *ptr1=*ptr1+1;
   *ptr2=*ptr2+5;
   printf("num1 = %d, num2 = %d\n",num1,num2);
   printf("num1 = %d, num2 = %d\n",*ptr1,*ptr2);
   ptr1=ptr2;
   ptr2=ptr1;
   printf("num1 = %d, num2 = %d\n",num1,num2);
   printf("num1 = %d, num2 = %d\n",*ptr1,*ptr2);

   num1=*ptr2;
   num2=num1-7;
  

   printf("num1 = %d, num2 = %d\n",num1,num2);
   printf("num1 = %d, num2 = %d\n",*ptr1,*ptr2);


    return 0;
}