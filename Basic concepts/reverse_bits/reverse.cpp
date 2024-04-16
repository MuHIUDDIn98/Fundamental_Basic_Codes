#include <iostream>
#include <bitset>
using namespace std;

// Function to reverse bits of a given 32-bit unsigned integer
unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    // Iterate through all bits of n
    // If a bit at position i is set in n, then set the corresponding bit in rev
    for (int i = 0; i < 32; i++) {
        // Left shift rev
        rev <<= 1;
        // If the current bit in n is set, set the corresponding bit in rev
        if (n & 1)
            rev |= 1;
        // Right shift n
        n >>= 1;
    }
    return rev;
}

int main() {
    int T;
    cin >> T; // Input number of test cases

    while (T--) {
        unsigned int n;
        cin >> n; // Input the unsigned integer n
        unsigned int reversed = reverseBits(n); // Reverse the bits of n
        cout << reversed << endl; // Output the result
    }

    return 0;
}
