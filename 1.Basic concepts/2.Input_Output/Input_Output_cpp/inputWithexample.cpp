#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    cout << "--- 1. Using the extraction operator (>>) with cin ---" << endl;
    int num1, num2;
    cout << "Enter two integers (separated by space): ";
    cin >> num1 >> num2;
    cout << "You entered: " << num1 << " and " << num2 << endl;

    double pi;
    cout << "Enter the value of pi: ";
    cin >> pi;
    cout << "You entered pi as: " << pi << endl;

    // Clear buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n--- 2. Using getline() to read a whole line into a string ---" << endl;
    string sentence1, sentence2;
    cout << "Enter a sentence: ";
    getline(cin, sentence1);
    cout << "You entered: \"" << sentence1 << "\"" << endl;

    cout << "Enter another sentence: ";
    getline(cin, sentence2);
    cout << "You entered: \"" << sentence2 << "\"" << endl;

    cout << "\n--- 3. Using cin.get() to read single characters ---" << endl;
    char char1, char2;
    cout << "Enter two characters (no space in between): ";
    char1 = cin.get();
    char2 = cin.get();
    cout << "You entered: '" << char1 << "' and '" << char2 << "'" << endl;

    // Clear buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n--- 4. Using cin.getline() for C-style strings (char arrays) ---" << endl;
    char phrase1[20], phrase2[30];
    cout << "Enter a short phrase (max 19 chars): ";
    cin.getline(phrase1, 20);
    cout << "You entered: \"" << phrase1 << "\"" << endl;

    cout << "Enter a longer phrase (max 29 chars): ";
    cin.getline(phrase2, 30);
    cout << "You entered: \"" << phrase2 << "\"" << endl;

    return 0;
}