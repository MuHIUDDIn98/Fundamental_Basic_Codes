#include <iostream>
#include <cctype> // for toupper and tolower
using namespace std;

int main() {
    // =========================== && and || (Leap Year)
    int year;
    cout << "\nEnter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }

    return 0;
}
