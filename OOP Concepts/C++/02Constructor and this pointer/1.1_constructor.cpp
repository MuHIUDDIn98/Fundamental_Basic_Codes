#include <iostream>
using namespace std;

// three different type of constructor
// *Default constructor
// *parameterized constructor/non-parameterized constructors
// *copy constructor

class rectangle
{
private:
    int length;
    int width;

public:
    int area()                  //facilitator 
    {
        return length * width;
    }

    int perimeter()          //facilitator 
    {

        return 2 * (length * width);
    }
    void setLength(int i) // Mutator //setter methode
    {
        if (i > 0)
            length = i;
        else
            width = 0;
    }
    void setBreath(int j)//Mutator 
    {
        if (j > 0)
            width = j;
        else
            width = 0;
    }

    int getLength()   // Accessor //getter methode

    {                  
        return length;
    }
    int getBreath() 
    {

        return width;
    }

    rectangle(int i = 0, int j = 0) // constructor creation  constructor doesn't have return type
    {

        setLength(i);
        setBreath(j);
    }

    rectangle(rectangle &r)       //copyconstructor
    {
        length = r.length;
        width = r.width;
    }
};

int main()
{

    rectangle r1; // here used default constructor

    r1.setLength(120); // mutator
    r1.setBreath(55);  // mutator

    cout << "r1 Objects area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;

    rectangle r2(20, 30); // paramiterized constructor

    cout << "r2 Objects area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;

    rectangle CopyRect(r1); // copy Constructor
    cout << "rect Objects area: " << CopyRect.area() << endl;
    cout << "rect Objects Perimeter: " << CopyRect.perimeter() << endl;
}