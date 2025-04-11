#include <stdio.h>

int main() {
    int sum = 0;
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Step-by-step addition:\n");

    for (int i = 1; i <= n; i++) {
        printf("Adding %d, current sum = %d", i, sum);
        sum += i;
        printf(" total sum %d\n",sum);
    }

    printf("\nFinal sum = %d\n", sum);

    return 0;
}