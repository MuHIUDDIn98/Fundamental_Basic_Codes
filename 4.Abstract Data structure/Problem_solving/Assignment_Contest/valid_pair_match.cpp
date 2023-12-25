#include<bits/stdc++.h>
using namespace std;

string is_valid_string(string& s) {
    stack<char> zeroOne;

    for (char c : s) {
        if (c == '0') {
            if (!zeroOne.empty() && zeroOne.top() == '1') {
                zeroOne.pop();
            } else {
                zeroOne.push('0');
            }
        } else {
            if (!zeroOne.empty() && zeroOne.top() == '0') {
                zeroOne.pop();
            } else {
                zeroOne.push('1');
            }
        }
    }

    return zeroOne.empty() ? "YES" : "NO";
}

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        string s;
        cin >> s;
        cout << is_valid_string(s) << endl;
    }

    return 0;
}

//contest link:
//https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-04/challenges