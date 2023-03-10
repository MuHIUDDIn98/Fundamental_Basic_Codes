#include <iostream>
using namespace std;

int main()
{
    class rec
    {
    private:
        int length;
        int width;

    public:
        int area()
        {
            return length * width;
        }

        int perimeter()
        {

            return 2 * (length * width);
        }

        void setLength(int i)
        {
            if (i > 0)
                length = i;
            else
                width = 0;
        }
        void setBreath(int j)
        {
            if (j > 0)
                width = j;
            else
                width = 0;
        }
    };

    rec r1, r2;

    r1.setLength(120);
    r1.setBreath(55);

    cout << "r1 Objects area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;

    r2.setLength(320);
    r2.setBreath(44);
    cout << "r2 Objects area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;
}