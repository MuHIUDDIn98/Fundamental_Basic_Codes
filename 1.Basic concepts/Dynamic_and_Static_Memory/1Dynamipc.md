# Dynamic Memory (Heap) & Pointers: A C++ Example

This example demonstrates how **dynamic memory** (allocated on the **Heap**) works in C++. Unlike Stack memory, Heap memory **persists** even after the function that created it ends. However, it also highlights a critical responsibility: **you must manually manage it**, or risk problems like **memory leaks**.

---

## The Code

```cpp
#include <iostream> // Use <iostream> instead of <bits/stdc++.h>

using namespace std;

int *p; // A global pointer.

void fun() {
    // 1. Allocate memory for ONE int on the HEAP.
    //    'x' is a LOCAL pointer (on the stack) holding the heap address.
    int *x = new int;

    // 2. Store the value 100 in the HEAP memory location.
    *x = 100;

    // 3. Copy the HEAP address from 'x' to the global pointer 'p'.
    //    Now 'p' also points to our heap memory.
    p = x;

    // 4. Print the value. This works.
    cout << "Inside fun(): Value at p -> " << *p << endl;

} // 5. fun() ends. The LOCAL pointer 'x' is destroyed.
  //    BUT the HEAP memory it (and 'p') pointed to REMAINS ALLOCATED.

int main() {
    fun(); // Call the function

    // 6. Access the HEAP memory via 'p'. This WORKS because heap memory persists.
    cout << "Inside main(): Value at p -> " << *p << endl;

    // 7. PROBLEM: We never call 'delete p;'! This is a memory leak.

    return 0;
}

````

# Heap Persistence & The Risk of Memory Leaks in C++

When working with dynamic memory (the Heap) in C++, it's important to understand both its benefits and its potential pitfalls. While it allows data to exist beyond the scope of the function that created it, it demands careful management.

---

## Why Dynamic Memory Works (and Why It's Dangerous)

The primary reason for using the Heap is **data persistence**. As seen in examples where a pointer accesses heap memory after the creating function returns, the data *outlives* the function. This is a powerful feature, essential for many complex applications.

However, this power comes with a major risk:

---

## The BIG Problem: Memory Leak! 💧

A common issue, especially with manual memory management, is the **memory leak**. This happens when memory is allocated using `new` but is **never released using `delete`**.

### What is a Memory Leak?

When your program allocates dynamic memory but then either:
* Loses all pointers to that memory, making it impossible to access or delete.
* Simply forgets to deallocate it before ending (or before it's no longer needed).

...that memory cannot be returned to the system or reused by your program. It's considered **"leaked."**

### Why is it Bad?

* **In a tiny program:** A small leak might not seem to matter as the operating system reclaims all memory when the program finishes.
* **In a long-running program:** (like a server, a game, or even a text editor) repeatedly leaking memory is a serious problem. It causes the program to consume more and more RAM over time, which can:
    * Slow down the program itself.
    * Slow down the entire computer system.
    * Eventually cause the program (or even the system) to crash when it runs out of available memory.

---

## How to Fix the Leak: Manual Deletion

The fundamental rule of manual dynamic memory management is: **You *must* pair every `new` with a corresponding `delete` (and every `new[]` with a `delete[]`).**

To fix a leak like the one in the previous example, you need to explicitly call `delete` on the pointer holding the heap address when you are finished with that memory.

```cpp
#include <iostream>

using namespace std;

int *p = nullptr; // Good practice to initialize pointers

void fun() {
    int *x = new int;
    *x = 100;
    p = x;
    cout << "Inside fun(): Value at p -> " << *p << endl;
}

int main() {
    fun();
    cout << "Inside main(): Value at p -> " << *p << endl;

    // --- THE FIX ---
    cout << "Deleting memory..." << endl;
    delete p;    // Release the heap memory back to the system
    p = nullptr; // Set p to null to show it's no longer valid (good practice)
    // --- END FIX ---

    return 0;
}

