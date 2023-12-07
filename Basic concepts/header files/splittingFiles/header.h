
#ifndef HEADER_H
#define HEADER_H

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

    int getLength();
    int getBreath();
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

#endif
