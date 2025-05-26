# Memory in C++: Stack vs. Heap

In a C++ program, memory is primarily divided into two main parts:

* **The Stack:** All of your local variables take up memory from the stack. This memory is managed automatically (allocated when entering a scope and deallocated when leaving).
* **The Heap:** This is a pool of unused program memory that can be used when the program runs to dynamically allocate memory as needed.

---

## Why Use Dynamic Memory Allocation?

> Many times, you are not aware in advance how much memory you will need to store particular information in a defined variable and the size of required memory can be determined at run time.
>
> You can allocate memory at run time within the heap for the variable of a given type using the `new` operator, which returns the address of the space allocated.

---

## Dynamic Memory with `new`

The memory address allocated on the heap can be stored in a **pointer**. This pointer can then be **dereferenced** (using the `*` operator) to access or modify the variable stored in that heap memory.

### Example:

```cpp
int *p = new int; // Allocate memory on the heap for one integer
*p = 5;           // Store the value 5 at that heap address