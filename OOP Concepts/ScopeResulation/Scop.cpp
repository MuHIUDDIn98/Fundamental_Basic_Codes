#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;

public:
    int area(); // prototyping

    int perimeter();
    bool isSquare();
    //~rectangle();

    void setLength(int i); // Mutator //setter methode

    void setBreath(int j); // Mutator //setter methode

    int getLength() { return length; } // Accessor //getter methode

    int getBreath() { return width; }

    rectangle(int i = 0, int j = 0) // constructor creation  constructor doesn't have return type
    {

        setLength(i);
        setBreath(j);
    }

    rectangle(rectangle &r) // copyconstructor
    {
        length = r.length;
        width = r.width;
    }
};

int main()
{
    rectangle r1, r2;

    r1.setLength(120);
    r1.setBreath(55);

    cout << "r1 Objects "
         << "Lenght :" << r1.getLength() << " Breath :" << r1.getBreath() << " area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;
    if(r1.isSquare()){

        cout<<"r1 object is a Squre "<<endl;
    }
    else{
     cout<<"r1 object is not a Squre "<<endl;

    }

    r2.setLength(320);
    r2.setBreath(44);
    cout << "r2 Objects " << " Lenght :" << r2.getLength() << " Breath :" << r2.getBreath() << " area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;
     if(r2.isSquare()){

        cout<<"r2 object is a Squre "<<endl;
    }
    else{
     cout<<"r2 object is not a Squre "<<endl;

    }


    rectangle r3(0,0);
    cout << "r3 Objects " << " Lenght :" << r3.getLength() << " Breath :" << r3.getBreath() << " area: " << r3.area() << endl;
    cout << "r3 Objects Perimeter: " << r3.perimeter() << endl;
     if(r3.isSquare()){

        cout<<"r3 object is a Squre "<<endl;
    }
    else{
     cout<<"r3 object is not a Squre "<<endl;

    }


    rectangle rect(10,10);
    cout << "rect Objects " << " Lenght :" << rect.getLength() << " Breath :" << rect.getBreath() << " area: " << rect.area() << endl;
    cout << "rect Objects Perimeter: " << rect.perimeter() << endl;
    if(rect.isSquare()){

        cout<<"rect object is a Squre "<<endl;
    }
}

void rectangle::setBreath(int j)
{
    if (j > 0)
        width = j;
    else
        width = 0;
}

void rectangle ::setLength(int i) // Mutator //setter methode
{
    if (i > 0)
        length = i;
    else
        width = 0;
}

int rectangle ::area()
{
    return length * width;
}
int rectangle ::perimeter()
{

    return 2 * (length * width);
}

bool rectangle ::isSquare() { return length == width; }
