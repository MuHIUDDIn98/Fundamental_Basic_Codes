#include <iostream>
using namespace std;

int main()
{
//test
    const char a1 = 'a';
    const char a2 = 'b';
    const char a3 = 'c';
    const char a4 = 'd';

    printf("Address of variabe a1 = %p\n", &a1);
    printf("Address of variabe a2 = %p\n", &a2);
    printf("Address of variabe a3 = %p\n", &a3);
    printf("Address of variabe a4 = %p\n", &a4);

    unsigned long long int addressOfa1 = (unsigned long long int)&a1;

    printf("Address of variable a1 = %I64x\n", addressOfa1);
}