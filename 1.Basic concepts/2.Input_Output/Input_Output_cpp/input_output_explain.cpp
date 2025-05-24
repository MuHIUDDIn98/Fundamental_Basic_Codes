#include <iostream>     // For input and output operations
#include <iomanip>      // For manipulating the output format (like setprecision, setw)
#include <string>       // For using the string data type

using namespace std;    // To avoid writing std:: before cout, cin, etc.

int main() {
    // Declare different types of variables
    int a, b;           // Integer variables
    double c, d;        // Double-precision floating-point variables
    string f;           // String variable
    char s[50];         // Character array (C-style string) with a maximum size of 50
    char g[50];         // Another character array (C-style string) with a maximum size of 50

    // Integer input
    std::cout << "test print using std namespace" << endl; // Example of using the std namespace explicitly
    cout << "Enter your numbers a and b :";
    cin >> a >> b;      // Read two integers from the user, separated by space
    cin.ignore();       // Important: Discards the newline character left in the input buffer by the previous cin operation.
                        // This is often needed before using getline after reading numbers.
    cout<<"Enter your string f "<<endl;
    getline(cin, f);    // Reads a whole line of text (including spaces) from the user and stores it in the string 'f'.
    cout << endl;       // Print an empty line for better readability
    cout << "a  = " << a << " " << "b = " << b << endl; // Display the entered integers
    cout << f << endl;                                   // Display the entered string

    // Floating-point input
    cout << "Enter your float numbers c and d :";
    cin >> c >> d;      // Read two floating-point numbers from the user
    cout << endl;

    cout << "c  = " << fixed << setprecision(2) << c << " " << "d = " << d << endl;
    // 'fixed' ensures that floating-point numbers are written in fixed-point notation.
    // 'setprecision(2)' sets the precision to two decimal places.

    // String input (C-style strings)
    cout << "Enter your string :" << endl;
    cin >> s;           // Reads a string from the user until a whitespace is encountered.
    cout << s << endl;

    cout << "Enter your string with space :" << endl;
    cin.getline(g, 50); // Reads a line of text (up to 49 characters + null terminator) including spaces,
                        // and stores it in the character array 'g'.
    cout<<g<<endl;

    // Manipulators
    int x = 456;
    int y = 40;
    cout << setw(5) << x << setw(10) << y << endl;
    // 'setw(n)' sets the width of the output field to at least n characters.
    // If the value is shorter, it will be padded (usually with spaces on the left).
    // Here, x will be printed in a field of width 5, and y in a field of width 10.
    cout << endl; // Add an extra newline at the end of the output

    return 0;           // Indicate successful program execution
}