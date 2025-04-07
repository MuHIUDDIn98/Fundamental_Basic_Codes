#include <iostream>     // For cout, endl
#include <climits>      // For integer limits
#include <cfloat>       // For float/double/long double limits
#include <cmath>        // For pow()
#include <cstddef>      // For size_t
#include <iomanip>      // For formatting output
using namespace std;

int main() {
    cout << fixed << setprecision(0);  // For printing large powers like 2^64 without decimals

    // ---------------- Integer Types ----------------
    signed char a;
    cout << "signed char: " << sizeof(a) << " Bytes ";
    cout << "range: " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
    cout << "2^8 = " << pow(2, 8) << "\n\n";

    unsigned char b;
    cout << "unsigned char: " << sizeof(b) << " Bytes ";
    cout << "range: 0 to " << UCHAR_MAX << "\n\n";

    short int c;
    cout << "short int: " << sizeof(c) << " Bytes ";
    cout << "range: " << SHRT_MIN << " to " << SHRT_MAX << "\n\n";

    unsigned short int d;
    cout << "unsigned short int: " << sizeof(d) << " Bytes ";
    cout << "range: 0 to " << USHRT_MAX << "\n\n";

    int e;
    cout << "int: " << sizeof(e) << " Bytes ";
    cout << "range: " << INT_MIN << " to " << INT_MAX << "\n\n";

    unsigned int f;
    cout << "unsigned int: " << sizeof(f) << " Bytes ";
    cout << "range: 0 to " << UINT_MAX << "\n\n";

    long g;
    cout << "long: " << sizeof(g) << " Bytes ";
    cout << "range: " << LONG_MIN << " to " << LONG_MAX << "\n\n";

    unsigned long ug;
    cout << "unsigned long: " << sizeof(ug) << " Bytes ";
    cout << "range: 0 to " << ULONG_MAX << "\n\n";

    long long h;
    cout << "long long: " << sizeof(h) << " Bytes ";
    cout << "range: " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "2^64 = " << pow(2, 64) << "\n\n";

    unsigned long long uh;
    cout << "unsigned long long: " << sizeof(uh) << " Bytes ";
    cout << "range: 0 to " << ULLONG_MAX << "\n\n";

    // ---------------- Floating Point Types ----------------
    float f1;
    cout << "float: " << sizeof(f1) << " Bytes ";
    cout << "range: " << scientific << FLT_MIN << " to " << FLT_MAX << endl;
    cout << "Precision: " << FLT_DIG << " decimal digits\n\n";

    double d1;
    cout << "double: " << sizeof(d1) << " Bytes ";
    cout << "range: " << DBL_MIN << " to " << DBL_MAX << endl;
    cout << "Precision: " << DBL_DIG << " decimal digits\n\n";

    long double ld1;
    cout << "long double: " << sizeof(ld1) << " Bytes ";
    cout << "range: " << LDBL_MIN << " to " << LDBL_MAX << endl;
    cout << "Precision: " << LDBL_DIG << " decimal digits\n\n";

    // ---------------- Character Type ----------------
    char ch;
    cout << fixed;
    cout << "char: " << sizeof(ch) << " Bytes ";
    cout << "range: " << (int)CHAR_MIN << " to " << (int)CHAR_MAX << "\n\n";

    // ---------------- Boolean Type ----------------
    bool flag = true;
    cout << "bool: " << sizeof(flag) << " Bytes ";
    cout << "values: 0 (false), 1 (true), current: " << flag << "\n\n";

    // ---------------- Special Type: size_t ----------------
    size_t sz;
    cout << "size_t: " << sizeof(sz) << " Bytes ";
    cout << "range: 0 to " << (size_t)-1 << "\n\n";  // Equivalent to SIZE_MAX

    return 0;
}
