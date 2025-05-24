#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << number << " is " << result << endl;

    return 0;
}