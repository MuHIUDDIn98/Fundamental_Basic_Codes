# 🧵 Word Count in C++ Using Stringstream

This Markdown document explains a simple C++ program that reads a line of text, extracts each word, prints them, and counts the total number of words.

---

## 📄 Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int count = 0;

    getline(cin, s);            // Step 1: Read a full line of input from the user
    stringstream ss(s);         // Step 2: Create a stringstream from the string

    string word;
    while(ss >> word){          // Step 3: Extract words one by one
        cout << word << " ";    // Print the current word
        count++;                // Increment word count
    }

    cout << endl;
    cout << "words in this string :" << count << endl;

    return 0;
}
```

---

## 🧠 Explanation

| Line | Description |
|------|-------------|
| `#include<bits/stdc++.h>` | Includes all standard C++ libraries (commonly used in competitive programming). |
| `using namespace std;` | Allows use of standard functions like `cin`, `cout`, etc., without the `std::` prefix. |
| `getline(cin, s);` | Reads an entire line of input into `s`, including spaces. |
| `stringstream ss(s);` | Converts the string `s` into a stream for word-by-word extraction. |
| `while(ss >> word)` | Extracts each word separated by whitespace. |
| `cout << word << " ";` | Prints each word followed by a space. |
| `count++;` | Increments the word counter. |
| `cout << "words in this string :" << count;` | Displays the total word count. |

---

## 🔁 Optional (Commented Out) Code

```cpp
// ss << s;
// ss >> word;
// cout << word << endl;
```

- `ss << s;` is another way to load a string into the stringstream.
- `ss >> word;` manually extracts words before the loop for testing.

---

## 🧪 Sample Input/Output

**Input:**
```
This is a test string
```

**Output:**
```
This is a test string 
words in this string :5
```

---

## ✅ Summary

This C++ program demonstrates:
- Reading a full line of text.
- Using `stringstream` to extract words.
- Printing each word.
- Counting and displaying the number of words.

Great for beginners learning string processing in C++!

