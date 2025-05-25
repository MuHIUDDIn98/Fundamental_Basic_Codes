# Stack Memory & Dangling Pointers: A C++ Example

One of the key features of the C++ **Stack** is that memory for local variables is managed *automatically*. It's created when a function (or scope) begins and destroyed when it ends. This is usually convenient, but it can lead to serious problems if you're not careful with pointers, as shown in this example.

---

## The Code

```cpp
#include <iostream> // Use <iostream> instead of <bits/stdc++.h>
#include <string>

using namespace std;

int *p; // A global pointer, initially pointing nowhere specific (or null)

void fun() {
    // 1. 'x' is created HERE on the stack when fun() starts.
    int x = 10;

    // 2. 'p' now points to the memory location of 'x' on the stack.
    p = &x;

    // 3. This works fine because 'x' is still 'alive' (in scope).
    cout << "Inside fun(): Value of x -> " << *p << ", x -> " << x << endl;

} // 4. 'x' is DESTROYED HERE when fun() ends. Its stack memory is released.

int main() {
    fun(); // Call the function

    // 5. 'p' STILL holds the old address, but that address is NO LONGER VALID.
    //    Accessing *p here is UNDEFINED BEHAVIOR!
    cout << "Inside main(): pointed variable in stack memory -> " << *p << endl;

    return 0;
}