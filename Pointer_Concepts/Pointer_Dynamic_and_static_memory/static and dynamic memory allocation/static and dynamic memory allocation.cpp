/*
In a C++ program, memory is divided into two parts:
     The stack: All of your local variables take up memory from the stack.

     The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.


     why we use static and dynamic memory allocation?
     ans--->Many times, you are not aware in advance how much memory you will need to store particular information
            in a defined variable and the size of required memory can be determined at run time.
            You can allocate memory at run time within the heap for the variable of a given type using the new operator,
            which returns the address of the space allocated.


            Dynamic Memory
            The allocated address can be stored in a pointer, which can then be dereferenced to access the variable.

             Example:
             int *p = new int;
             *p = 5;
             We have dynamically allocated memory for an integer, and assigned it a value of 5.
             The pointer p is stored in the stack as a local variable, and holds the heap's allocated address as its value. The value of 5 is stored at that address in the heap.
             */

             #include <iostream>
using namespace std;

int main()
{
    int *p = new int; // request memory
    *p = 5; // store value

    cout << "value soted in the heap memory  :"<<*p << endl; // use value

    delete p; // free up the memory allocated memeory

    /*For local variables on the stack, managing memory is carried out automatically.
On the heap, it's necessary to manually handle the dynamically allocated memory,
 and use the delete operator to free up the memory when it's no longer needed.
 The delete operator frees up the memory allocated for the variable,
  but does not delete the pointer itself, as the pointer is stored on the stack.*/

    return 0;
}
