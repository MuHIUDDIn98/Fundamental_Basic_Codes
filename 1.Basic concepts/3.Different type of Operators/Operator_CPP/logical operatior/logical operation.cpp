#include <iostream>
#include <cctype> // for toupper and tolower
using namespace std;

int main() {
    // =========================== ||
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

    // =========================== &&
    // Largest of 3 Numbers Using AND (&&)
    int num1, num2, num3;
    cout << "\nEnter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << num1 << " is the greatest number.\n";
    } else if (num2 > num1 && num2 > num3) {
        cout << num2 << " is the greatest number.\n";
    } else if (num3 > num1 && num3 > num2) {
        cout << num3 << " is the greatest number.\n";
    } else {
        cout << "There is a tie.\n";
    }

    // =========================== && and || (Leap Year)
    int year;
    cout << "\nEnter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }

    // =========================== ! (NOT Operator)
    bool isRainy = false;
    if (!isRainy) {
        cout << "\nIt's not raining. You can go outside!\n";
    } else {
        cout << "\nIt's raining. Better take an umbrella.\n";
    }

    return 0;
}
