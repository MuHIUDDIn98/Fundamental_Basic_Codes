#include "header.h"

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

int rec ::getLength()
{ // Accessor //getter methode

    return length;
}
int rec ::getBreath()
{

    return width;
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