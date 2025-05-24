#include <iostream>     // For input and output operations (cin, cout, endl)
#include <algorithm>    // For using algorithms like swap, min, and max
#include <vector>       // For using vectors with min/max (for initializer lists)

using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (separated by space): ";
    cin >> a >> b;
    cout << "Initial values: a = " << a << ", b = " << b << endl;

    // 1. swap()
    // The swap() function (from <algorithm>) exchanges the values of two variables.
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // 2. min()
    // The min() function (from <algorithm>) returns the smaller of two values.
    cout << "Minimum of a and b: " << min(a, b) << endl;

    // You can also use min() with an initializer list (requires <algorithm> and conceptually <vector> implicitly)
    cout << "Minimum of {a, b, 5, 4, 3, 2, 2, 2}: " << min({a, b, 5, 4, 3, 2, 2, 2}) << endl;

    // 3. max()
    // The max() function (from <algorithm>) returns the larger of two values.
    cout << "Maximum of a and b: " << max(a, b) << endl;

    // Similarly, max() can be used with an initializer list
    cout << "Maximum of {a, b, 5, 4, 3, 2, 2, 2}: " << max({a, b, 5, 4, 3, 2, 2, 2}) << endl;

    return 0;
}