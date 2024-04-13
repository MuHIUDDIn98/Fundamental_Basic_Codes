#include<stdio.h>

// Function prototype
int fibo_rec(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int fibo = fibo_rec(n);
    printf("Fibonacci of %d-th term is %d\n", n, fibo);
    return 0;
}

// Recursive function to calculate the Fibonacci number of the nth term
int fibo_rec(int n) {
    if (n <= 1)
        return n;
    else
        return fibo_rec(n - 1) + fibo_rec(n - 2);
}
