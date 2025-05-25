# Printing Dynamic Arrays Using Another Pointer in C++

It's common to allocate memory in one part of your program (like a function) and use it in another (like `main`). To do this with dynamic arrays and pointers, the function that creates the memory needs to return the pointer (the address) to the caller.

---

## Your Original Code (for reference)

This code creates and prints inside `fun`. `main` has no access to `x`.

```cpp
#include <iostream>

using namespace std;

void fun() {
    int *x = new int[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }
    cout << "Printing inside fun():" << endl;
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    // PROBLEM 1: x is lost when fun ends.
    // PROBLEM 2: new int[5] is never deleted -> Memory Leak!
}

int main() {
    fun();
    // Cannot access 'x' here.
    return 0;
}

```
## The Solution: Returning the Pointer
### Here's how to modify the code so main can receive the pointer and print the array:


```cpp
#include <iostream>

using namespace std;

// 1. Change the return type to int*
int* createAndFillArray() {
    // Allocate memory on the heap
    int *arr = new int[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // 2. Return the pointer (the address) to the caller
    return arr;
}

int main() {
    // 3. Create a pointer in main to hold the returned address.
    //    Initialize to nullptr as good practice.
    int* p_myArray = nullptr;

    // 4. Call the function and store the returned pointer.
    p_myArray = createAndFillArray();

    // 5. Check if the pointer is valid (optional but safe)
    if (p_myArray != nullptr) {
        cout << "\nPrinting from main() using another pointer:" << endl;
        // 6. Use the new pointer 'p_myArray' to print.
        for (int i = 0; i < 5; i++) {
            cout << p_myArray[i] << " ";
        }
        cout << endl;

        // 7. IMPORTANT: Since main now 'owns' the memory,
        //    it MUST delete it!
        cout << "\nDeleting memory from main()..." << endl;
        delete[] p_myArray;
        p_myArray = nullptr; // Set back to null.
    } else {
        cout << "Failed to allocate memory." << endl;
    }

    return 0;
}
```