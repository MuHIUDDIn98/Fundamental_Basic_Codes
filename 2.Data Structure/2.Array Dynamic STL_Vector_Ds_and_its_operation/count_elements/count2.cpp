#include <iostream>
#include <vector>
#include <algorithm> // for sort and binary_search
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);         // original vector
    vector<int> copy_a(n);    // copy for checking existence

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        copy_a[i] = a[i];
    }

    sort(copy_a.begin(), copy_a.end()); // sort for binary_search

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (binary_search(copy_a.begin(), copy_a.end(), a[i] + 1)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
