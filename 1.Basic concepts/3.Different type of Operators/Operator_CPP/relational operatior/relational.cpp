#include <iostream>
using namespace std;

int main() {
    int marks;

    // Input from user
    cout << "Enter your marks: ";
    cin >> marks;

    cout << "\n";

    // Validate marks
    if (marks > 100 || marks < 0) {
        cout << "\"Invalid marks\"" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: A-" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 40) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 33) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F (Failed)" << endl;
    }

    return 0;
}
