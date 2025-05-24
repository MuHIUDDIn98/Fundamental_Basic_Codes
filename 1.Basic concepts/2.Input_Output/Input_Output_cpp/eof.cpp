#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter pairs of integers (press Ctrl+D or Ctrl+Z then Enter to finish):\n";

    while (cin >> num1 >> num2) {
        cout << "Pair entered: " << num1 << ", " << num2 << endl;
        // Process the pair here
    }

    cout << "\nFinished reading pairs." << endl;

    return 0;
}