
#include <iostream>
using namespace std;

int sum(int a, int b=42) {
    int result = a + b;
    return (result);
}

int volume(int l=1, int w=1, int h=1) {
    return l*w*h;
}

int main() {
    int x = 24;
    int y = 36;

    //calling the function with both parameters
    int result = sum(x, y);
    cout <<"result of passing two parameter :"<<result << endl;

    //calling the function without b
    result = sum(x);
    cout <<"result of passing one parameter :"<<  result << endl;

    cout <<"volume of object passing no parameter :"<< volume() << endl;
    cout <<"Volume of object passing one parameter :"<< volume(5) << endl;

    cout <<"volume of object passing  two parameter : "<< volume(2, 3) << endl;
    cout <<"volume of object passing three parameter :" <<volume(3, 7, 6) << endl;


  return 0;
}
