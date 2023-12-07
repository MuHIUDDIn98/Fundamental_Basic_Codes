
#include <iostream>
using namespace std;

int main()
{ cout<<"increment by 1"<<endl;
    for (int a = 0; a < 10; a++) {
        cout << a << endl;
    }
   cout<<"increment by 10"<<endl;
     for (int a = 2; a <= 50; a+=10) {
        cout << a << endl;
    }
   cout<<"decrement by 3"<<endl;
    for (int a = 50; a >= 0; a -= 3) {
        cout << a << endl;
    }

    return 0;
}
