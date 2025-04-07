#include <iostream>
#include <cctype> // for toupper and tolower
using namespace std;

int main() {
    // Vowel Check Using OR (||)
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch); // Convert to lowercase for comparison
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << char(toupper(ch)) << " is a vowel.\n";
    } else {
        cout << char(toupper(ch)) << " is a consonant.\n";
    }

    return 0;
}
