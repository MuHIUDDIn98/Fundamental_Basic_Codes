#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, fullName;

    cout << "Enter your first and last name (separated by a space): ";
    cin >> firstName >> lastName;

    fullName = firstName + " " + lastName;

    cout << "Your full name is: " << fullName << endl;

    return 0;
}