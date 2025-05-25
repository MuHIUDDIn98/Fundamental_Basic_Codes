# Handling Dynamic Arrays Correctly: Avoiding Leaks & Dangling Pointers

Your code correctly demonstrates how to allocate a dynamic array in one function (`func`), return it, and use it in another (`main`). It also correctly identifies that you need to use `delete[]` to prevent a **memory leak**.

However, there's a critical issue: **You are trying to use the memory *after* you have deleted it.** This leads to Undefined Behavior. Let's break it down.

---

## Your Code

```cpp
#include <iostream> // Use <iostream> instead of <bits/stdc++.h>

using namespace std;

// Function to allocate and fill a dynamic array
int* func(int n) {
    // Allocate n integers on the heap
    int *x = new int[n];

    cout << "Enter your array elements :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    // Return the pointer to the heap memory
    return x;
}

// Function to print the array
void printArray(int *a, int n) {
    // Check if the pointer is null before using it
    if (a == nullptr) {
        cout << "Array pointer is null (memory likely deleted)." << endl;
        return;
    }

    cout << "Array elements :" << endl;
    for (int i = 0; i < n; i++) {
        // Accessing a[i] here
        cout << a[i] << endl;
    }
    cout << "--------------------" << endl;
}

int main() {
    cout << "Enter your array size :" << endl;
    int n;
    cin >> n;

    // Get the pointer to the dynamic array
    int *p = func(n);

    // Print the array - THIS IS OKAY ✅
    printArray(p, n);

    // --- Preventing the Memory Leak ---
    cout << "Deleting the array memory..." << endl;
    delete[] p; // This correctly releases the memory. p is now DANGLING.

    // --- THE PROBLEM ---
    cout << "Attempting to print again AFTER deleting..." << endl;
    // THIS IS UNDEFINED BEHAVIOR ❌
    // You are trying to use a pointer to memory that no longer belongs to you!
    printArray(p, n); // <<<--- THIS IS THE BUG!

    // A better approach after deleting is to set the pointer to null.
    // p = nullptr;
    // printArray(p, n); // This would now safely report it's null.

    return 0;
}