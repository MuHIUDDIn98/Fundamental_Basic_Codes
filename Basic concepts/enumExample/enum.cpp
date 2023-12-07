#include <iostream>
using namespace std;

// enum Color
// {
//     RED,
//     GREEN,
//     BLUE
// };
enum Color
{
    RED=5,
    GREEN,
    BLUE
};

int main()
{

    Color c = GREEN;

    cout<<"Enum values :"<<RED<<endl;
    cout<<"Enum values :"<<GREEN<<endl;
    cout<<"Enum values :"<<BLUE<<endl;

    if (c == RED)
    {
        cout << "The color is red!" << endl;
    }
    else if (c == GREEN)
    {
        cout << "The color is green!" << endl;
    }
    else if (c == BLUE)
    {
        cout << "The color is blue!" << endl;
    }

    return 0;
}