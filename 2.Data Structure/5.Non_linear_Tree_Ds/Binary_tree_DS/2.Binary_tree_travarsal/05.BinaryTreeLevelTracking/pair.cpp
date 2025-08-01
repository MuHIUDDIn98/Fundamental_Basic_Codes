#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare pairs
    pair<int, int> p;
    pair<string, int> q;

    // Declare a vector of pair<int, int>
    vector<pair<int, int>> v;

    // Assign and print pair p
    p = make_pair(2, 3);
    cout << "p -> " << p.first << " " << p.second << endl;

    // Assign and print pair q
    q = make_pair("enam", 5);
    cout << "q -> " << q.first << " " << q.second << endl;

    // Insert pair into vector
    v.push_back(p);
    v.push_back({23,24});

    // Access and print the first element in the vector
    pair<int, int> e = v.front();
    cout << "v[0] -> " << e.first << " " << e.second << endl;
    cout << "v[1] -> " << v[1].first << " " << v[1].second << endl;

    return 0;
}
