
#include <stdio.h>

int main() {
    // Write C code here
    int x=10;
    int *ptr = &x;
    printf("x variable addresss              %p\n",&x);
    printf("x variable memory size %d\n",sizeof(x));
    printf("x variable address or inside ptr value: %p\n",ptr);
    printf("ptr variable memory size %d\n",sizeof(ptr));
    printf("print ptr variable address       %p\n",&ptr);
    printf("print x variable value %d\n",*ptr);
    printf("print x variable value %d\n",x);
    x=1000;
    printf("print x variable value %d\n",*ptr);
    printf("print x variable value %d\n",x);
    *ptr=200;
    printf("print x variable value %d\n",*ptr);
    printf("print x variable value %d\n",x);
    int *ptr22=ptr; // or &x
    *ptr22= 345;
   
    printf("print ptr22 variable address       %p\n",&ptr22);
    printf("ptr22 variable memory size %d\n",sizeof(ptr22));
    printf("print x variable value %d\n",*ptr);
    printf("print x variable value %d\n",x);
    
    

    return 0;
}