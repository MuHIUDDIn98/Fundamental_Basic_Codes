#include <iostream>
using namespace std;

int main()
{

    struct rec
    {
        int length;
        int Breath;

        float Area()
        {

            return length * Breath;
        }

        float Perimeter()
        {

            return 2 * (length + Breath);
        }
    };

    struct student
    {
        int roll;
        char name[25];
        char department[25];
        char address[60];
    };

    rec re1;

    re1.length = 44;
    re1.Breath = 33;

    cout << "Area of  re1 :" << re1.Area() << endl;
    cout << "Perimeter of re1 :" << re1.Perimeter() << endl;

    struct rec r2 = {10, 5};
    cout << "Area of  re1 :" << r2.Area() << endl;
    cout << "Perimeter of re1 :" << r2.Perimeter() << endl;

    struct student s1={10,"Ashik","BBA","Mogbazar"};
    cout<<"Name :"<<s1.name<<endl;
    cout<<"Roll :"<<s1.roll<<endl;
    cout<<"Department :"<<s1.department<<endl;
    cout<<"Mogbazar :"<<s1.address<<endl;
}