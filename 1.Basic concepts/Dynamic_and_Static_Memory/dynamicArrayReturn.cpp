#include<bits/stdc++.h>
using namespace std;

// Function returns both the pointer to the array and its size
pair<int*, int> fun() {
    int n;
    cout << "Enter your dynamic array size :" << endl;
    cin >> n;

    int *a = new int[n]; // dynamically allocate an array of size n
    cout << "Take input in dynamic array" << endl;

    for(int i = 0; i < n; i++) {
        cin >> a[i]; // taking input
    }

    return {a, n}; // return both the array and its size as a pair
}

int main() {
    // Receiving the pointer and size of the array
    pair<int*, int> result = fun();
    int *p = result.first; // array pointer
    int n = result.second; // size of array

    cout << "Printing the array:" << endl;
    for(int i = 0; i < n; i++) {
        cout << p[i] << " "; // print the array
    }

    // Free the dynamically allocated memory
    delete[] p;
    return 0;
}
