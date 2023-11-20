
#include <iostream>
#include <cmath>

using namespace std;

// function prototype
int convert(long long);

int main() {
  long long n;
  cout << "Enter a ternery number: ";
  cin >> n;
  cout << n << " in ternery = " << convert(n) << " in decimal";
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n = n / 10;
    dec += rem * pow(3, i);
    ++i;
  }

  return dec;
}