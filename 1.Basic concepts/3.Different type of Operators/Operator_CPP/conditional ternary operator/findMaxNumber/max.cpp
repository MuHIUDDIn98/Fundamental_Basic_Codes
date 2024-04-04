#include <iostream>
using namespace std;

int Max(int a, int b, int c)

{
    if (a > b && a > c)
    {

        return a;
    }
    else if (b > c && b > c)
    {

        return b;
    }

    else
    {
        return c;
    }
}

int main()
{
    cout << "Maximum number " << Max(7, 10, 5);

    return 0;
}
