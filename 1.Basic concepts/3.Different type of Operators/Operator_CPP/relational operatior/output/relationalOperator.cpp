#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Take two inputs from the user
    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\n--- Relational Operator Results ---\n";

    // == Equal to
    cout << "a == b : " << (a == b) << " (Is a equal to b?)\n";

    // != Not equal to
    cout << "a != b : " << (a != b) << " (Is a NOT equal to b?)\n";

    // > Greater than
    cout << "a > b  : " << (a > b) << " (Is a greater than b?)\n";

    // < Less than
    cout << "a < b  : " << (a < b) << " (Is a less than b?)\n";

    // >= Greater than or equal to
    cout << "a >= b : " << (a >= b) << " (Is a greater than or equal to b?)\n";

    // <= Less than or equal to
    cout << "a <= b : " << (a <= b) << " (Is a less than or equal to b?)\n";

    return 0;
}
