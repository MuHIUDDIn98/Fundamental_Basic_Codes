#include <iostream>
using namespace std;

class rec
{
private:
    int length;
    int width;

public:
    int area();

    int perimeter();

    void setLength(int i); // Mutator //setter methode

    void setBreath(int j); // function prototyping

    int getLength()
    { // Accessor //getter methode

        return length;
    }
    int getBreath()
    {

        return width;
    }

    rec(int l, int b);
    rec() {}
};

class cuboide : public rec // inheriting from rec class
{
private:
    int height;

public:
    cuboide(int l = 0, int b = 0, int h = 0)
    {
        height = h;
        setLength(l);
        setBreath(b);
    }

    int getHeight() { return height; }
    void setHeight(int h);

    int volume();
};

int main()
{

    rec r1;

    r1.setLength(120);
    r1.setBreath(55);

    cout << "r1 Objects "
         << "Lenght :" << r1.getLength() << " Breath :" << r1.getBreath() << " area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;

    rec r2(34, 66);
    cout << "r2 Objects "
         << " Lenght :" << r2.getLength() << " Breath :" << r2.getBreath() << " area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;

    cuboide Q(11, 22, 33); // cuboide object class object Q
    cout << "Length of Cuboide :" << Q.getLength()<< endl;
    cout << "breath of Cuboide :" << Q.getBreath()<< endl;
    cout << "Height of Cuboide :" << Q.getHeight()<< endl;
    cout << "Volume of Cuboide :" << Q.volume()<< endl;
}

int rec ::area()
{
    return length * width;
}

int rec ::perimeter()
{

    return 2 * (length * width);
}
void rec ::setLength(int i) // Mutator //setter methode
{
    if (i > 0)
        length = i;
    else
        length = 0;
}
void rec ::setBreath(int j)
{
    if (j > 0)
        width = j;
    else
        width = 0;
}

void cuboide ::setHeight(int j)
{
    if (j > 0)
        height = j;
    else
        height = 0;
}

int cuboide ::volume()
{

    return getLength() * getBreath() * getHeight();
}

rec::rec(int l, int b)
{
    setLength(l);
    setBreath(b);
}