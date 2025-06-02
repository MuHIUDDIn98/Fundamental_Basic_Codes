#include <iostream>
#include <string>

// By including this line, we no longer need to write "std::"
// before string, cout, and endl.
using namespace std;

int main() {
    // 1. s= and s.assign() -> Assigning a string
    string s;
    s = "Hello"; // Using the '=' operator to assign a value.
    cout << "1. Initial string: " << s << endl;

    string s2;
    s2.assign("World"); // Using the assign() function.
    cout << "2. Assigned with s.assign(): " << s2 << endl;

    // ---

    // 2. s+= and s.append() -> Appending to a string
    s += " ";       // Appending a space using '+='.
    s.append(s2);   // Appending the string s2 using append().
    cout << "3. After append: " << s << endl;

    // ---

    // 3. s.push_back() -> Adding a single character to the end
    s.push_back('!'); // Adds '!' to the end of "Hello World".
    cout << "4. After push_back('!'): " << s << endl;

    // ---

    // 4. s.pop_back() -> Removing the last character
    s.pop_back(); // Removes '!' from the end.
    cout << "5. After pop_back(): " << s << endl;

    // ---

    // 5. s.erase() -> Erasing characters from the string
    // Let's erase " World" from "Hello World".
    s.erase(5, 6);
    cout << "6. After erase(5, 6): " << s << endl;

    // ---

    // 6. s.replace() -> Replacing a portion of the string
    // In "Hello", let's replace "ello" with "i".
    s.replace(1, 4, "i");
    cout << "7. After replace(1, 4, \"i\"): " << s << endl;

    // ---

    // 7. s.insert() -> Inserting characters into the string
    // In "Hi", let's insert " there" at index 2.
    s.insert(2, " there");
    cout << "8. After insert(2, \" there\"): " << s << endl;

    return 0;
}