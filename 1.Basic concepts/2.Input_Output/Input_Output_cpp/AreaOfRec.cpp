#include <iostream>
#include <iomanip> // For setprecision

using namespace std;

int main() {
    double length, width, area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;

    cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;

    return 0;
}