#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>   // For M_PI (though we can also define pi directly)

using namespace std;

int main() {
    double radius, area, circumference;
    const double PI = 3.14159265358979323846; // Define a constant for PI

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << fixed << setprecision(3); // Set the output to fixed-point notation with 3 decimal places

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}