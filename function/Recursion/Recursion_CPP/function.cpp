#include <iostream>
using namespace std;

int timesTwo(int x) {
    return x*2;
}

int addNumbers(int x, int y) {
    int result = x + y;
    return result;
}
int addNumbers(int x, int y, int z, int a) {
  int result = x + y + z + a;
  return result;
}

int main() {
    cout << timesTwo(8) << endl;

    cout <<timesTwo(5) << endl;

    cout <<timesTwo(42) << endl;

    cout << addNumbers(50, 25)<<endl;
    cout << addNumbers(1, 7, 8, 3);
}
