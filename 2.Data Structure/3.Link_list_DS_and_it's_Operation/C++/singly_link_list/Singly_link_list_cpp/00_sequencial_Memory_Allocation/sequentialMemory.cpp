#include <bits/stdc++.h>
#include <cstdint>  // For uintptr_t
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v = {11, 22, 33, 44, 55};

    cout << "Addresses of array 'a' (hex):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << &a[i] << " ";
    }
    cout << endl;

    cout << "Addresses of array 'a' (decimal):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (uintptr_t)&a[i] << " ";
    }
    cout << endl;

    cout << "Values of array 'a':" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "\nAddresses of vector 'v' elements (decimal):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (uintptr_t)&v[i] << " ";
    }
    cout << endl;

    cout << "Values of vector 'v':" << endl;
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
