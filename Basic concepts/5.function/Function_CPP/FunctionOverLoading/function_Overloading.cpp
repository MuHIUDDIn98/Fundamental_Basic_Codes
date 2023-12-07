#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}
void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}
void printNumber(char x){
 cout << "Prints a charecter: " << x << endl;
}
int main() {
    int a = 16;
    float b = 54.541;
    float c =67.33;
    printNumber(a);
    printNumber(b);
    printNumber('A');




}
