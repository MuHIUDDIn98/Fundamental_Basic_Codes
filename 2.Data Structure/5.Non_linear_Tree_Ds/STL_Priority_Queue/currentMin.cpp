#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Write your code here
    priority_queue<int, vector<int>, greater<int>> pq;

    int initial_size_pq;
    cin >> initial_size_pq;

    while (initial_size_pq--) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int command;
        cin >> command;

        if (command == 0) {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (command == 1) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2) {
            if (!pq.empty()) {
                pq.pop(); // delete current min
                if (!pq.empty()) {
                    cout << pq.top() << endl; // print new min
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
