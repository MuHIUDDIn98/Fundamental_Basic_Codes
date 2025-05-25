# How to Increase the Size of a Dynamic Array in C++

A common need when working with data is to change the size of an array after it has been created, especially when dealing with an unknown amount of input. However, C-style arrays (whether on the stack or allocated dynamically with `new[]`) have a **fixed size** once created. You cannot *directly* "resize" them.

So, how do you handle situations where you need more space? You have two main approaches:

1.  **The Manual Way:** Create a new, larger array and copy data (Not recommended for most C++ use cases).
2.  **The C++ Way:** Use `std::vector`, which handles resizing automatically (Highly Recommended).

Let's explore both.

---

## 1. The Manual Way (Using `new` and `delete[]`) - Not Recommended

If you are managing memory yourself with `new[]`, the only way to "increase" the size is to perform these steps:

1.  **Allocate a New Array:** Create a *brand new* dynamic array with the desired larger size using `new[]`.
2.  **Copy Elements:** Copy all the elements from the *old* array into the *new* array.
3.  **Delete the Old Array:** Release the memory occupied by the *old* array using `delete[]`.
4.  **Update the Pointer:** Make your original pointer point to the *new* array.

This process is **inefficient** (copying can be slow for large arrays) and **error-prone** (it's easy to make mistakes with `new` and `delete`, leading to memory leaks or dangling pointers).

### Manual Resizing Example:

```cpp
#include <iostream>
#include <algorithm> // For std::min

using namespace std;

// Function to "resize" a raw dynamic array
int* resizeArray(int* oldArray, int oldSize, int newSize) {
    cout << "Manually resizing from " << oldSize << " to " << newSize << "..." << endl;

    // 1. Allocate a new, larger array
    int* newArray = new int[newSize];

    // 2. Copy elements from the old array to the new one
    //    We copy min(oldSize, newSize) elements.
    int elementsToCopy = min(oldSize, newSize);
    for (int i = 0; i < elementsToCopy; ++i) {
        newArray[i] = oldArray[i];
    }

    // Optional: Initialize new elements if newSize > oldSize
    if (newSize > oldSize) {
        for (int i = oldSize; i < newSize; ++i) {
            newArray[i] = 0; // Initialize new elements to 0
        }
    }

    // 3. Delete the old array
    delete[] oldArray;

    // 4. Return the pointer to the new array
    return newArray;
}

void printRawArray(const int* arr, int size) {
    if (!arr) return;
    cout << "Array: [ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}


int main() {
    int currentSize = 3;
    // Start with an array of size 3
    int* myArray = new int[currentSize];
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;

    cout << "Original ";
    printRawArray(myArray, currentSize);

    // Increase the size to 5
    int newSize = 5;
    myArray = resizeArray(myArray, currentSize, newSize);
    currentSize = newSize; // Update the size variable!

    // Add new elements (they were initialized to 0)
    myArray[3] = 40;
    myArray[4] = 50;

    cout << "Resized ";
    printRawArray(myArray, currentSize);

    // IMPORTANT: Still need to delete the final array!
    delete[] myArray;

    return 0;
}