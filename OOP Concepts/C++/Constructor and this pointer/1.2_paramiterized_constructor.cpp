#include <iostream>

// Use the standard namespace to avoid writing std:: repeatedly
using namespace std;

// Define the 'student' class
class student {
public:
    // Member variables (attributes)
    int id;
    double gpa;

    // Member function (method) to display student info
    void display() {
        cout << "id:" << id << "  gpa:" << gpa << endl;
    }

    // == Parameterized Constructor ==
    // This constructor takes parameters (x for id, y for gpa)
    // and uses them to initialize the member variables when an
    // object is created.
    student(int x, double y) {
        cout << "Parameterized constructor called for ID: " << x << endl;
        id = x;  // Assign the parameter 'x' to the member 'id'
        gpa = y; // Assign the parameter 'y' to the member 'gpa'
    }

    // NOTE: Because you defined a constructor (the parameterized one),
    // the compiler will NOT automatically create a default (no-argument)
    // constructor. So, you cannot create a student object like 'student s;'
    // unless you explicitly define a student() constructor as well.

}; // Don't forget the semicolon after the class definition!

// The main function where program execution begins
int main() // 'main' should return an integer (int)
{
    // Create 'alim' using the parameterized constructor,
    // passing 104 and 3.40 as arguments.
    student alim(104, 3.40);

    // Create 'lipi' using the parameterized constructor,
    // passing 105 and 3.45 as arguments.
    student lipi(105, 3.45);

    // Call the display method for each object
    alim.display();
    lipi.display();

    // Return 0 to indicate successful program execution
    return 0;
}