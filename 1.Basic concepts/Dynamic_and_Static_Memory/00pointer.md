# Pointers in C++  CPP

## What are Pointers? 🤔

In C++, a **pointer** is a special type of variable that holds the *memory address* of another variable. Instead of storing a value directly, it stores the location where a value can be found. Think of it like having a piece of paper with the house number (memory address) written on it, which tells you where your friend (the variable) lives.

Pointers are a fundamental concept in C++ and are used for various purposes, including:

* **Dynamic memory allocation**: Allocating memory during program execution.
* **Passing arguments to functions by reference**: Modifying the original variable within a function.
* **Working with arrays and strings**: Efficiently accessing and manipulating elements.
* **Implementing data structures**: Creating linked lists, trees, and graphs.

---

## Declaring Pointers 📜

To declare a pointer, you need to specify the *data type* of the variable it will point to, followed by an asterisk (`*`), and then the pointer's name.

```cpp
int *ptr; // Declares a pointer to an integer
double *dPtr; // Declares a pointer to a double
char *cPtr; // Declares a pointer to a character
```
## examples : 
```cpp
int myVar = 20;
int *ptr = &myVar;

// Accessing the value using the pointer
int value = *ptr; // value will be 20

// Modifying the value using the pointer
*ptr = 30; // myVar will now be 30
``````


## Basic Usage



```cpp

#include <iostream>
using namespace std;

int main() {
  int number = 50;
  int *p; // Declare a pointer to an integer

  p = &number; // Assign the address of 'number' to the pointer 'p'

  cout << "--- Basic Example ---" << endl;
  cout << "Value of number: " << number << endl;
  cout << "Address of number: " << &number << endl;
  cout << "Value of p (address stored in p): " << p << endl;
  cout << "Value pointed to by p (*p): " << *p << endl;

  *p = 100; // Change the value at the address pointed to by p

  cout << "New value of number: " << number << endl;
  cout << "---------------------\n" << endl;

  return 0;
}
``````

## Pointers and Arrays

```cpp

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer points to the first element (arr[0])

    cout << "--- Pointers and Arrays ---" << endl;
    cout << "Using pointer to access array elements:" << endl;

    for (int i = 0; i < 5; ++i) {
        // *(ptr + i) is equivalent to arr[i]
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    cout << "\nIncrementing the pointer:" << endl;
    ptr = arr; // Reset pointer to the beginning
    cout << "First element: " << *ptr << endl;
    ptr++; // Move pointer to the next element (arr[1])
    cout << "Second element: " << *ptr << endl;
    cout << "-------------------------\n" << endl;

    return 0;
}
``````
## swap 
```cpp
#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "--- Pointers and Functions ---" << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(&x, &y); // Pass the addresses of x and y

    cout << "After swap: x = " << x << ", y = " << y << endl;
    cout << "----------------------------\n" << endl;

    return 0;
}

``````
