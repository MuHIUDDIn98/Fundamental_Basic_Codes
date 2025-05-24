#include <iostream>

using namespace std;

int main() {
    int number;
    int sumOfEvens = 0;

    cout << "Enter integers (one per line, press Ctrl+D or Ctrl+Z then Enter to finish):\n";

    while (cin >> number) {
        if (number % 2 == 0) {
            sumOfEvens += number;
        }
    }

    cout << "Sum of even numbers: " << sumOfEvens << endl;

    return 0;
}