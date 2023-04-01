#include <iostream>
using namespace std;

int main()
{

    struct rec
    {
        int l;
        int B;

        float Area()
        {

            return l * B;
        }

        float Perimeter()
        {

            return 2 * (l + B);
        }

    };

    struct rec re1={10,20};
    struct rec *p=&re1;

    cout << "Area of  re1 :" << re1.Area() << endl;
    cout << "Perimeter of re1 :" << re1.Perimeter() << endl;

    (*p).l=30;
    (*p).B=45;

    cout << "changing with (*p) Area of  re1 :" << (*p).Area() << endl;
    cout << "changing with (*p) Perimeter of re1 :" << (*p).Perimeter() << endl;


   p->l=30;
   p->B=45;
   cout << "changing with  p->Area() Area of  re1 :" << p->Area() << endl;
    cout << "changing with p->Perimeter() Perimeter of re1 :" << p->Perimeter() << endl;
}