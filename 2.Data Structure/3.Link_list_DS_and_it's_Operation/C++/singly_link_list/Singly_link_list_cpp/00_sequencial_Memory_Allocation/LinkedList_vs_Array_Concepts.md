# 📘 Linked List vs Array – Conceptual Questions

---

### 🔹 Why does a Linked List require more memory than an Array?

A **linked list** uses more memory because each node stores:
- The actual **data** (e.g., an integer).
- A **pointer** to the next node.

In contrast, an **array** stores only the data values in contiguous memory.

#### ➕ Memory Breakdown:
| Structure | Memory Used per Element |
|----------|-------------------------|
| Array    | `sizeof(data)`          |
| Linked List | `sizeof(data) + sizeof(pointer)` |

Hence, linked lists require **extra memory** for each pointer.

---

### 🔹 Three Limitations of Arrays Solved by Linked Lists

1. **Fixed Size**  
   - Arrays are static; their size is fixed during declaration.
   - Linked lists are **dynamic**, allowing runtime growth/shrinkage.

2. **Costly Insertions/Deletions**  
   - In arrays, inserting/removing elements requires shifting.
   - In linked lists, insertion/deletion is **constant-time (O(1))** if position is known.

3. **Memory Waste**  
   - Arrays may over-allocate memory that remains unused.
   - Linked lists **allocate exactly as needed**.

---

### 🔹 What is the Value of `Head`?

`Head` is a pointer that stores the **address of the first node** in the linked list.

Example:
```cpp
Node* head = new Node(20);
// If allocated at address 1000, then:
head == 1000
```

---

### 🔹 What is the value at the `?` marked address?

> ⚠️ This depends on a specific memory diagram that shows node addresses and values. Please provide the diagram to get an exact answer.

---

### 🔹 What is the value of `Head->Next->Next->Value`?

This accesses the **third node's value** in the list.

Example linked list:
```cpp
head (20) → a (30) → b (40) → c (60)
```

Then:
```cpp
Head->Next->Next->Value = 40
```

---

### 🔹 What is the value of `Sum` in the pseudocode?

```cpp
Sum = 0
Temp = Head
While ( Temp -> Next != 1020 ) {
    Sum += Temp->value
    Temp = Temp->Next
}
Sum -= Temp->value
```

Assume the list is:
```
[1000] value=10, next=1001  
[1001] value=20, next=1002  
[1002] value=30, next=1020  
[1020] value=40, next=NULL
```

### 🔍 Step-by-Step Execution:
- Sum = 0  
- Temp = 1000 → Sum = 10  
- Temp = 1001 → Sum = 10 + 20 = 30  
- Temp = 1002 → loop stops (next == 1020)  
- Then: `Sum -= Temp->value` → `Sum = 30 - 30 = 0`

### ✅ Final Answer:
```cpp
Sum = 0
```