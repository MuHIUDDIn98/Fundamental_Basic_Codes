#include <stdio.h>
#include <limits.h>   // For integer limits
#include <float.h>    // For floating point limits
#include <math.h>     // For pow()
#include <stdbool.h>  // For _Bool and true/false

int main() {
    // ---------------- Integer Types ----------------
    signed char a;
    printf("signed char: %lu Bytes ", sizeof(a));
    printf("range: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("2^8 = %.0f\n\n", pow(2, 8));

    unsigned char b;
    printf("unsigned char: %lu Bytes ", sizeof(b));
    printf("range: 0 to %u\n\n", UCHAR_MAX);

    short int c;
    printf("short int: %lu Bytes ", sizeof(c));
    printf("range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    unsigned short int d;
    printf("unsigned short int: %lu Bytes ", sizeof(d));
    printf("range: 0 to %u\n\n", USHRT_MAX);

    int e;
    printf("int: %lu Bytes ", sizeof(e));
    printf("range: %d to %d\n\n", INT_MIN, INT_MAX);

    unsigned int f;
    printf("unsigned int: %lu Bytes ", sizeof(f));
    printf("range: 0 to %u\n\n", UINT_MAX);

    long g;
    printf("long: %lu Bytes ", sizeof(g));
    printf("range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    unsigned long ug;
    printf("unsigned long: %lu Bytes ", sizeof(ug));
    printf("range: 0 to %lu\n\n", ULONG_MAX);

    long long h;
    printf("long long: %lu Bytes ", sizeof(h));
    printf("range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("2^64 = %.0f\n\n", pow(2, 64));

    unsigned long long uh;
    printf("unsigned long long: %lu Bytes ", sizeof(uh));
    printf("range: 0 to %llu\n\n", ULLONG_MAX);

    // ---------------- Floating Point Types ----------------
    float f1;
    printf("float: %lu Bytes ", sizeof(f1));
    printf("range: %.3e to %.3e\n", FLT_MIN, FLT_MAX);
    printf("Precision: %d decimal digits\n\n", FLT_DIG);

    double d1;
    printf("double: %lu Bytes ", sizeof(d1));
    printf("range: %.3e to %.3e\n", DBL_MIN, DBL_MAX);
    printf("Precision: %d decimal digits\n\n", DBL_DIG);

    long double ld1;
    printf("long double: %lu Bytes ", sizeof(ld1));
    printf("range: %.3Le to %.3Le\n", LDBL_MIN, LDBL_MAX);
    printf("Precision: %d decimal digits\n\n", LDBL_DIG);

    // ---------------- Character Type ----------------
    char ch;
    printf("char: %lu Bytes ", sizeof(ch));
    printf("range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    // ---------------- Boolean Type ----------------
    _Bool flag = 1;
    printf("_Bool (boolean): %lu Bytes, values: 0 (false), 1 (true), current: %d\n\n", sizeof(flag), flag);

    // ---------------- Special Type: size_t ----------------
    size_t sz;
    printf("size_t: %lu Bytes ", sizeof(sz));
    printf("range: 0 to %zu\n\n", (size_t)-1); // (size_t)-1 is max value for size_t

    return 0;
}
