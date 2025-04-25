#include <stdio.h>
#include <string.h>
 
char digits[1000001]; // Declare a global array to store the digits
 
int main() {
    int N;
 
    // Read the number of digits
    scanf("%d", &N);
 
    // Read the string of digits
    scanf("%s", digits);
 
    long long sum = 0; // Use long long to store the sum, just to be safe with large N
 
    // Iterate through the string of digits
    for (int i = 0; i < N; i++) {
        // Convert the character digit to its integer value
        // by subtracting the ASCII value of '0'
        sum += digits[i] - '0';
    }
 
    // Print the total sum
    printf("%lld\n", sum);
 
    return 0;
}