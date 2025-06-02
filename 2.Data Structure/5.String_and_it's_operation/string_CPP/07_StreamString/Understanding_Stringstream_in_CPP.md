# 📘 Understanding `stringstream` in C++

The `stringstream` class in C++ is a powerful utility for parsing and formatting strings using the familiar input/output (`>>`, `<<`) stream operators. It is part of the `<sstream>` library.

---

## 📦 What is `stringstream`?

`stringstream` allows you to:

- Read from a string like you would from `cin`
- Write to a string like you would to `cout`
- Easily perform type conversions

It belongs to the `<sstream>` header and provides string-based input/output stream functionality.

```cpp
#include <sstream>
```

---

## 🔧 Types of String Streams

| Stream Type        | Purpose                       |
|--------------------|-------------------------------|
| `stringstream`     | Input and Output              |
| `istringstream`    | Input-only (like `cin`)       |
| `ostringstream`    | Output-only (like `cout`)     |

---

## 🔍 Common Use Cases

### 1. 🔤 Splitting a String into Words

```cpp
string line = "I love C++ programming";
stringstream ss(line);
string word;
while (ss >> word) {
    cout << word << endl;
}
```

### 2. 🔢 String to Integer Conversion

```cpp
string numStr = "123";
stringstream ss(numStr);
int num;
ss >> num;
cout << num + 1; // Output: 124
```

### 3. 🔁 Integer to String Conversion

```cpp
int number = 456;
stringstream ss;
ss << number;
string result = ss.str(); // "456"
```

### 4. 📑 Parsing CSV Data

```cpp
string csv = "apple,banana,grape";
stringstream ss(csv);
string item;
while (getline(ss, item, ',')) {
    cout << item << endl;
}
```

---

## ♻️ Reusing a `stringstream`

```cpp
stringstream ss;
ss << "100";
int a;
ss >> a;

// Clear and reuse
ss.str("");
ss.clear();

ss << "200";
int b;
ss >> b;
```

---

## 🛠️ Useful Member Functions

| Function        | Description                           |
|----------------|---------------------------------------|
| `str()`        | Get the internal string               |
| `str("...")`   | Set a new internal string             |
| `clear()`      | Reset error flags (after extraction)  |
| `eof()`        | Check if end of string is reached     |

---

## 🆚 `cin` vs `stringstream`

| Feature            | `cin`        | `stringstream`       |
|--------------------|--------------|-----------------------|
| Reads from         | Console      | String                |
| Supports `>>`      | ✅            | ✅                     |
| Reusable           | ❌            | ✅ (with `clear`)      |
| Type conversion    | Manual       | Easy via streams      |

---

## 📦 Real-World Utility: Tokenizer Function

```cpp
vector<string> tokenize(string text) {
    vector<string> tokens;
    stringstream ss(text);
    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}
```

---

## ✅ Summary

- `stringstream` is ideal for reading and writing strings using stream syntax.
- It simplifies word-splitting, type conversion, and text parsing.
- It is commonly used in competitive programming and input processing.

For most string manipulation tasks in C++, `stringstream` should be your go-to tool!

