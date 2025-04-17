#include <stdio.h>

int main() {
    // post increment
    int x = 10;
    int y = x++;
    printf("Post Increment: x = %d, y = %d\n", x, y); // Output: x = 11, y = 10

    // pre increment
    int a = 5;
    int b = ++a;
    printf("Pre Increment: a = %d, b = %d\n", a, b);   // Output: a = 6, b = 6

    // example of pre and post increment in a single statement
    int n = 10;
    int m = n++;
    int z = ++m;
    printf("Combined Increment: n = %d, m = %d, z++ = %d\n", n, m, z++); // Output: n = 11, m = 12, z++ = 12
    printf("Combined Increment: z = %d\n", z);                         // Output: z = 13

    // pre decrement
    int p = 8;
    int q = --p;
    printf("Pre Decrement: p = %d, q = %d\n", p, q);   // Output: p = 7, q = 7

    // post decrement
    int r = 3;
    int s = r--;
    printf("Post Decrement: r = %d, s = %d\n", r, s);  // Output: r = 2, s = 3

    // example of pre and post decrement in a single statement
    int u = 6;
    int v = u--;
    int w = --v;
    printf("Combined Decrement: u = %d, v = %d, w-- = %d\n", u, v, w--); // Output: u = 5, v = 5, w-- = 5
    printf("Combined Decrement: w = %d\n", w);                         // Output: w = 4

    int t = 0;
    ++t;
    printf("Double Pre Increment: ++t = %d\n", ++t); // Output: ++t = 2

    return 0;
}