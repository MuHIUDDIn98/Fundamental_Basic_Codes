#include <iostream>
using namespace std;

int main()
{
    class rec
    {
    public:
        int length;
        int width;

        int area()
        {
            return length * width;
        }

        int perimeter()
        {

            return 2 * (length * width);
        }
    };

    rec r1, r2;

    r1.length = 120;
    r1.width = 55;

    cout << "r1 Objects area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;

    r2.length = 12;
    r2.width = 5;

    cout << "r2 Objects area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;
}