#include <iostream>
#include <cctype> // for toupper and tolower
using namespace std;

int main() {
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
   

    return 0;
}

