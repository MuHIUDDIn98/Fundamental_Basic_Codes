# C++ Arrays and Pointers: An Intimate Relationship

This document explores the close relationship between arrays and pointers in C++. It demonstrates how an array's name can often be treated as a pointer to its first element, and how pointer arithmetic provides a powerful way to navigate and manipulate array elements.

---

## The Code

```cpp
#include<iostream>
using namespace std;

int main(){

    // 1. Initialize an array and a pointer to it
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A; // 'p' now points to the first element, A[0]

    // 2. Basic Pointer Navigation
    cout << "--- Basic Navigation ---" << endl;
    cout << "Pointing to A[0]: " << *p << endl; // Reads A[0] (Value: 2)
    p++; // Moves 'p' to point to the next element, A[1]
    cout << "Pointing to A[1]: " << *p << endl; // Reads A[1] (Value: 4)
    p--; // Moves 'p' back to point to A[0]
    cout << "Pointing to A[0]: " << *p << endl; // Reads A[0] (Value: 2)
    cout << "------------------------" << endl;

    // 3. Printing Elements & Addresses using (p + i)
    cout << "--- Printing with (p + i) ---" << endl;
    cout << "Element (Address): ";
    for(int i = 0; i < 5; i++){
        // *(p+i) gets the value at A[i]
        // (p+i) gets the address of A[i]
        cout << *(p + i) << " (" << (p + i) << ")  ";
    }
    cout << endl << "---------------------------" << endl;

    // 4. Printing Addresses using (p + i)
    cout << "--- Addresses (p + i) ---" << endl;
    for(int i = 0; i < 5; i++){
        cout << (p + i) << " "; // Prints addresses of A[0] to A[4]
    }
    cout << endl << "-------------------------" << endl;

    // 5. Printing Elements using i[A] (Unconventional but Valid)
    cout << "--- Elements (i[A]) ---" << endl;
    for(int i = 0; i < 5; i++){
        // A[i] == *(A+i) == *(i+A) == i[A]
        cout << i[A] << " "; // Prints 2 4 6 8 10
    }
    cout << endl << "-----------------------" << endl;

    // 6. Printing Addresses using (A + i)
    cout << "--- Addresses (A + i) ---" << endl;
    for(int i = 0; i < 5; i++){
        cout << (A + i) << " "; // Prints addresses, A acts like a pointer
    }
    cout << endl << "-------------------------" << endl;

    // 7. Iterating by Incrementing the Pointer
    cout << "--- Iterating with s++ ---" << endl;
    int B[5] = {22, 33, 44, 55, 66};
    int *s = A; // 's' points to A[0]
    cout << "Starting address: " << s << endl;
    for(int i = 0; i < 5; i++){
        cout << *s << endl; // Print value
        s++;                // Move pointer to the next element
    }
    cout << "Ending address (one past last): " << s << endl; // 's' now points just past A[4]
    cout << "--------------------------" << endl;

    // 8. Pointer Difference
    cout << "--- Pointer Difference ---" << endl;
    int *e = B;       // Points to B[0]
    int *f = &B[4];   // Points to B[4]
    cout << "Pointer f: " << f << endl;
    cout << "Pointer e: " << e << endl;
    cout << "Difference (f - e): " << (f - e) << endl; // Result is 4 (elements)
    cout << "Difference (e - f): " << (e - f) << endl; // Result is -4 (elements)
    cout << "--------------------------" << endl;

    return 0;
}
