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

        rec(int l=0,int b=0){ //parametererized constructor 

            setLength(l);
            setBreath(b);
        }
    };

    rec r1;

    r1.setLength(120);
    r1.setBreath(55);

    cout << "r1 Objects area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;

    rec r2(34,55);
    cout << "r2 Objects area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;
}