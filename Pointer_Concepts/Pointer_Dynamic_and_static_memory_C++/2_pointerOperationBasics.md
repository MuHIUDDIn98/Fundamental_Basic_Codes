# C++ Basic Pointer Operations: Address-Of, Dereferencing & Casting

This document explains a simple C++ code example that demonstrates fundamental pointer concepts. It shows how to:

1.  Declare and initialize a variable.
2.  Get the memory address of a variable.
3.  Declare pointers of different types (`int*`, `char*`).
4.  Use type casting to make a pointer treat memory differently.
5.  Use the dereference operator (`*`) to read the value a pointer points to.
6.  Use the dereference operator (`*`) to modify the value a pointer points to.

---

## The Code

```cpp
#include<iostream>
#include<stdio.h> // For printf

using namespace std;

int main(){

    // 1. Initialize an integer variable
    int data = 100;
    printf("Initial value of data is %d\n", data);
    printf("----------------------------------------\n");

    // 2. Create pointers to 'data'
    char* pAddress = (char*)&data; // Pointer 'pAddress' treats 'data's memory as a char (1 byte)
    int* PAddress = &data;         // Pointer 'PAddress' treats 'data's memory as an int (usually 4 bytes)

    // 3. Print addresses
    printf("Memory address of 'data' (&data)        : %p\n", (void*)&data);
    printf("Memory address held by 'PAddress'       : %p\n", (void*)PAddress);
    printf("Memory address held by 'pAddress'       : %p\n", (void*)pAddress);
    printf("Memory address of 'pAddress' itself     : %p\n", (void*)&pAddress); // Note: This is the address OF THE POINTER, not 'data'
    printf("----------------------------------------\n");

    // 4. Dereference pointers to READ values
    char value = *pAddress;   // Reads 1 byte from 'data's address. Since 100 fits, this usually works.
    int value1 = *PAddress;   // Reads 4 bytes (or sizeof(int)) from 'data's address.

    printf("Value read via 'char*' (*pAddress)      : %d \n", value);
    printf("Value read via 'int*' (*PAddress)       : %d \n", value1);
    printf("----------------------------------------\n");

    // 5. Dereference pointers to WRITE values
    printf("Changing value via 'char*' to 65...\n");
    *pAddress = 65; // Modifies ONLY THE FIRST BYTE of 'data' to 65 (ASCII 'A').
    printf("Value of 'data' now                     : %d\n", data);

    printf("Changing value via 'int*' to 70...\n");
    *PAddress = 70; // Modifies THE ENTIRE INT 'data' to 70.
    printf("Value of 'data' now                     : %d\n", data);
    printf("----------------------------------------\n");

    return 0;
}

```

# Explanation

## 1. Initialization

* An integer variable `data` is created and assigned the value `100`. This variable resides in a specific location in memory.

## 2. Creating Pointers

* `int* PAddress = &data;`: We get the memory address of `data` using the `&` operator and store it in an integer pointer `PAddress`. This pointer "knows" it's pointing to an `int` and will operate accordingly (usually on 4 bytes at a time).

* `char* pAddress = (char*)&data;`: We get the address of `data` again, but this time we **cast** it to `(char*)`. This tells the compiler to treat the memory address as if it's pointing to a `char`. A `char` pointer operates on **1 byte** at a time. Both pointers hold the *same* starting memory address.

## 3. Printing Addresses

* We print the address of `data` using `&data`, `PAddress`, and `pAddress`. These will all show the same memory location.

* We also print `&pAddress`. This is different – it shows where the `pAddress` *pointer variable itself* is stored in memory, not the address it *holds*.

## 4. Dereferencing (Reading)

* `*PAddress`: The `*` operator dereferences the pointer. Since `PAddress` is an `int*`, it reads `sizeof(int)` bytes (usually 4) starting from the address and interprets them as an integer. It correctly reads `100`.

* `*pAddress`: Since `pAddress` is a `char*`, it reads only **1 byte** from the address. Because `100` (which is `0x64` in hexadecimal) fits within a single byte, this *happens* to work in this specific case and reads `100`. If `data` held a value larger than 255, `*pAddress` would only read the *least significant byte* (on Little-Endian systems) and would give an unexpected result.

## 5. Dereferencing (Writing)

* `*pAddress = 65;`: This writes the value `65` (which is `0x41`) into the **first byte** of `data`. Since `data` was `100` (`0x64`), its first byte is changed to `0x41`. If `int` is 4 bytes and the system is Little-Endian, the memory for `data` changes from `64 00 00 00` to `41 00 00 00`. When read as an `int`, this value is `65`.

* `*PAddress = 70;`: This writes the value `70` using the `int*` pointer. It writes the value `70` across all `sizeof(int)` bytes allocated for `data`. The `data` variable now correctly holds the value `70`.

## Key Takeaways

* Pointers store memory addresses.

* The **type** of a pointer is crucial: it determines how many bytes are accessed during dereferencing and how pointer arithmetic works.

* **Type Casting** allows you to reinterpret memory but must be used carefully, as it can lead to unexpected behavior if you don't understand the underlying memory layout (like Endianness) and data sizes.

* You can read *and* write to a variable's memory location using a dereferenced pointer.

