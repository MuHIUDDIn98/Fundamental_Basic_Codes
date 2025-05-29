#include <iostream>

using namespace std;

class student {
public:
    int id;
    double gpa;

    // Default Constructor: Initializes members to default values
    student() {
        id = 0;   // Default value for id
        gpa = 0.0; // Default value for gpa
        cout << "Default constructor called. ID set to 0, GPA set to 0.0" << endl;
    }

    // Display method remains the same
    void display() {
        cout << "id:" << id << "  gpa:" << gpa << endl;
    }
}; // Don't forget the semicolon after the class definition

int main() // 'main' should return int
{
    cout << "Creating obj (using default constructor):" << endl;
    student obj; // Calls the default constructor
    obj.display(); // Will show id:0 gpa:0

    cout << "\nCreating alim (using default constructor):" << endl;
    student alim; // Calls the default constructor
    alim.id = 104;  // Set values *after* creation
    alim.gpa = 3.40;
    alim.display(); // Shows the updated values

    cout << "\nCreating lipi (using default constructor):" << endl;
    student lipi; // Calls the default constructor
    lipi.id = 105;  // Set values *after* creation
    lipi.gpa = 3.45;
    lipi.display(); // Shows the updated values

    return 0; // It's good practice for main to return 0
}