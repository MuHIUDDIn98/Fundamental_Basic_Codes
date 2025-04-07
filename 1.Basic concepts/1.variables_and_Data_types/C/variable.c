#include<stdio.h>
#include<stdbool.h> // for bool type
int main(){
    int num1 = 10;
    num1 = 200;
    float f = 4.56;
    char c = 'A';
    char str[20] = "Hello World";

    bool b =true;

    printf("Hello \n \t world!\n");
    printf("num1 = %d\n", num1);
    printf("f = %.2f\n", f);
    printf("c = %c\n",c);
    printf("b = %d\n", b);
    printf("str = %s\n\n\n\n\n", str);
    
    

    printf("printing all variable types sizes \n \n \n");



// %zu is the correct format specifier to print a size_t value in decimal.

// z → tells the compiler: "This is a size_t."

// u → means "unsigned decimal integer".


    printf("sizeof(num1) = %zu\n", sizeof(num1));
    printf("sizeof(f) = %zu\n", sizeof(f));
    printf("sizeof(c) = %zu\n", sizeof(c));
    printf("sizeof(str) = %zu\n", sizeof(str));
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long) = %zu\n", sizeof(long));
    printf("sizeof(long long) = %zu\n", sizeof(long long));
    printf("sizeof(short) = %zu\n", sizeof(short));
    printf("sizeof(long double) = %zu\n", sizeof(long double));
    printf("sizeof(unsigned int) = %zu\n", sizeof(unsigned int));
    printf("sizeof(unsigned long) = %zu\n", sizeof(unsigned long));
    printf("sizeof(unsigned long long) = %zu\n", sizeof(unsigned long long));  
    printf("sizeof(unsigned short) = %zu\n", sizeof(unsigned short));
    printf("sizeof(unsigned char) = %zu\n\n\n\n\n\n", sizeof(unsigned char));

    printf("printing all  pointer variable types sizes \n \n \n");

//     Pointers typically all have the same size on a given architecture:

        // 4 bytes on 32-bit systems

        // 8 bytes on 64-bit systems

// So, even char******* and int******* will likely be the same size, because they are just pointers.
//     However, the size of the data they point to is different.
//     The size of a pointer is determined by the architecture of the system (32-bit or 64-bit) and the compiler being used.

    printf("sizeof(size_t) = %zu\n", sizeof(size_t));
    printf("sizeof(ptr) = %zu\n", sizeof(&num1));  
    printf("sizeof(void*) = %zu\n", sizeof(void*));
    printf("sizeof(int*) = %zu\n", sizeof(int*));
    printf("sizeof(float*) = %zu\n", sizeof(float*));
    printf("sizeof(char*) = %zu\n", sizeof(char*));
    printf("sizeof(double*) = %zu\n", sizeof(double*));
    printf("sizeof(long*) = %zu\n", sizeof(long*));
    printf("sizeof(long long*) = %zu\n", sizeof(long long*));
    printf("sizeof(short*) = %zu\n", sizeof(short*));
    printf("sizeof(long double*) = %zu\n", sizeof(long double*));
    printf("sizeof(unsigned int*) = %zu\n", sizeof(unsigned int*));
    printf("sizeof(unsigned long*) = %zu\n", sizeof(unsigned long*));
    printf("sizeof(unsigned long long*) = %zu\n", sizeof(unsigned long long*));
    printf("sizeof(unsigned short*) = %zu\n", sizeof(unsigned short*));
    printf("sizeof(unsigned char*) = %zu\n", sizeof(unsigned char*));
    printf("sizeof(size_t*) = %zu\n", sizeof(size_t*));
    printf("sizeof(void**) = %zu\n", sizeof(void**));
    printf("sizeof(int**) = %zu\n", sizeof(int**));
    printf("sizeof(float**) = %zu\n", sizeof(float**));
    printf("sizeof(char**) = %zu\n", sizeof(char**));
    printf("sizeof(double**) = %zu\n", sizeof(double**));
    printf("sizeof(long**) = %zu\n", sizeof(long**));
    printf("sizeof(long long**) = %zu\n", sizeof(long long**));
    printf("sizeof(short**) = %zu\n", sizeof(short**));
    printf("sizeof(long double**) = %zu\n", sizeof(long double**));
    printf("sizeof(unsigned int**) = %zu\n", sizeof(unsigned int**));
    printf("sizeof(unsigned long**) = %zu\n", sizeof(unsigned long**));
    printf("sizeof(unsigned long long**) = %zu\n", sizeof(unsigned long long**));
    printf("sizeof(unsigned short**) = %zu\n", sizeof(unsigned short**));
    printf("sizeof(unsigned char**) = %zu\n", sizeof(unsigned char**));
    printf("sizeof(size_t**) = %zu\n", sizeof(size_t**));
    printf("sizeof(void***) = %zu\n", sizeof(void***));
    printf("sizeof(int***) = %zu\n", sizeof(int***));
    printf("sizeof(float***) = %zu\n", sizeof(float***));
    printf("sizeof(char***) = %zu\n", sizeof(char***));
    printf("sizeof(double***) = %zu\n", sizeof(double***));
    printf("sizeof(long***) = %zu\n", sizeof(long***));
    printf("sizeof(long long***) = %zu\n", sizeof(long long***));
    printf("sizeof(short***) = %zu\n", sizeof(short***));
    printf("sizeof(long double***) = %zu\n", sizeof(long double***));
    printf("sizeof(unsigned int***) = %zu\n", sizeof(unsigned int***));
    printf("sizeof(unsigned long***) = %zu\n", sizeof(unsigned long***));
    printf("sizeof(unsigned long long***) = %zu\n", sizeof(unsigned long long***));
    printf("sizeof(unsigned short***) = %zu\n", sizeof(unsigned short***));
    printf("sizeof(unsigned char***) = %zu\n", sizeof(unsigned char***));
    printf("sizeof(size_t***) = %zu\n", sizeof(size_t***));
    printf("sizeof(void****) = %zu\n", sizeof(void****));
    printf("sizeof(int****) = %zu\n", sizeof(int****));
    printf("sizeof(float****) = %zu\n", sizeof(float****));
    printf("sizeof(char****) = %zu\n", sizeof(char****));
    printf("sizeof(double****) = %zu\n", sizeof(double****));
    printf("sizeof(long****) = %zu\n", sizeof(long****));
    printf("sizeof(long long****) = %zu\n", sizeof(long long****));
    printf("sizeof(short****) = %zu\n", sizeof(short****));
    printf("sizeof(long double****) = %zu\n", sizeof(long double****));
    printf("sizeof(unsigned int****) = %zu\n", sizeof(unsigned int****));
    printf("sizeof(unsigned long****) = %zu\n", sizeof(unsigned long****));
    printf("sizeof(unsigned long long****) = %zu\n", sizeof(unsigned long long****));
    printf("sizeof(unsigned short****) = %zu\n", sizeof(unsigned short****));
    printf("sizeof(unsigned char****) = %zu\n", sizeof(unsigned char****));
    printf("sizeof(size_t****) = %zu\n", sizeof(size_t****));
    printf("sizeof(void*****) = %zu\n", sizeof(void*****));
    printf("sizeof(int*****) = %zu\n", sizeof(int*****));
    printf("sizeof(float*****) = %zu\n", sizeof(float*****));
    printf("sizeof(char*****) = %zu\n", sizeof(char*****));
    printf("sizeof(double*****) = %zu\n", sizeof(double*****));
    printf("sizeof(long*****) = %zu\n", sizeof(long*****));
    printf("sizeof(long long*****) = %zu\n", sizeof(long long*****));
    printf("sizeof(short*****) = %zu\n", sizeof(short*****));
    printf("sizeof(long double*****) = %zu\n", sizeof(long double*****));
    printf("sizeof(unsigned int*****) = %zu\n", sizeof(unsigned int*****));
    printf("sizeof(unsigned long*****) = %zu\n", sizeof(unsigned long*****));
    printf("sizeof(unsigned long long*****) = %zu\n", sizeof(unsigned long long*****));
    printf("sizeof(unsigned short*****) = %zu\n", sizeof(unsigned short*****));
    printf("sizeof(unsigned char*****) = %zu\n", sizeof(unsigned char*****));
    printf("sizeof(size_t*****) = %zu\n", sizeof(size_t*****));
    printf("sizeof(void******) = %zu\n", sizeof(void******));
    printf("sizeof(int******) = %zu\n", sizeof(int******));
    printf("sizeof(float******) = %zu\n", sizeof(float******));
    printf("sizeof(char******) = %zu\n", sizeof(char******));
    printf("sizeof(double******) = %zu\n", sizeof(double******));
    printf("sizeof(long******) = %zu\n", sizeof(long******));
    printf("sizeof(long long******) = %zu\n", sizeof(long long******));
    printf("sizeof(short******) = %zu\n", sizeof(short******));


    return 0;
   
}

