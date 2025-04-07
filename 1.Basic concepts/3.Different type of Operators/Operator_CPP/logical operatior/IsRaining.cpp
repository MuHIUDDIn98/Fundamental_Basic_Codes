#include <iostream>
#include <cctype> // for toupper and tolower
using namespace std;

int main() {
    // =========================== ! (NOT Operator)
    bool isRainy = false;
    if (!isRainy) {
        cout << "\nIt's not raining. You can go outside!\n";
    } else {
        cout << "\nIt's raining. Better take an umbrella.\n";
    }

    return 0;
}
