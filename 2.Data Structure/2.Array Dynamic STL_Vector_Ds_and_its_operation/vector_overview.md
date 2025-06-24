# C++ Vectors Overview

In C++, a **vector** is a dynamic array that can grow or shrink in size as needed.  
It is part of the **Standard Template Library (STL)** and is defined in the `<vector>` header.  
Vectors are also sometimes referred to as **"dynamic arrays"** because they provide similar functionality to arrays but with the added benefit of automatic resizing.

---

## Key Features

### 1. Dynamic Sizing
Vectors automatically resize to accommodate more elements, ensuring efficient memory usage.

### 2. Random Access
Vectors provide **constant-time random access** to their elements using `[]`.

### 3. Contiguous Memory
Elements are stored in **contiguous memory locations**, which benefits certain algorithms.

### 4. Insertion and Deletion
- Efficient at the end using `push_back()` and `pop_back()`.
- You can also insert or erase at arbitrary positions using `insert()` and `erase()`.

---

## Vector Built-in Functions

### 1. Constructor

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `vector<type> v;` | Constructs an empty vector. | O(1) |
| `vector<type> v(N);` | Constructs a vector with N elements (default/garbage values). | O(N) |
| `vector<type> v(N, V);` | Constructs a vector with N elements, each of value V. | O(N) |
| `vector<type> v(v2);` | Copy constructor from another vector. | O(N) |
| `vector<type> v(A, A+N);` | Constructs a vector from array A of size N. | O(N) |

---

### 2. Capacity

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `v.size()` | Returns the number of elements. | O(1) |
| `v.max_size()` | Maximum elements the vector can hold. | O(1) |
| `v.capacity()` | Returns current allocated capacity. | O(1) |
| `v.clear()` | Clears the vector (memory remains). | O(N) |
| `v.empty()` | Returns true if the vector is empty. | O(1) |
| `v.resize()` | Resizes the vector. | O(K), where K is size difference |

---

### 3. Modifiers

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `v =` or `v.assign()` | Assigns values from another vector. | O(N) or O(1) |
| `v.push_back()` | Adds element to the end. | O(1) |
| `v.pop_back()` | Removes the last element. | O(1) |
| `v.insert()` | Inserts elements at a specific position. | O(N+K) |
| `v.erase()` | Removes elements at a specific position. | O(N+K) |
| `replace(v.begin(), v.end(), oldVal, newVal)` | Replaces `oldVal` with `newVal` (not part of vector class). | O(N) |
| `find(v.begin(), v.end(), value)` | Finds a value (also not a vector method). | O(N) |

---

### 4. Element Access

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `v[i]` | Access ith element. | O(1) |
| `v.at(i)` | Access ith element with bounds checking. | O(1) |
| `v.front()` | Access the first element. | O(1) |
| `v.back()` | Access the last element. | O(1) |

---

### 5. Iterators

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `v.begin()` | Iterator to the first element. | O(1) |
| `v.end()` | Iterator to one past the last element. | O(1) |

---

## Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.insert(v.begin() + 1, 10);

    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
// Output: 1 10 2 3 4
