#include<bits/stdc++.h>
using namespace std;

bool is_valid_string(string& s) {
    stack<char> zero;

      for (char c : s) {
        if(c == '0'){
            zero.push(c);
        }
        else if( !zero.empty() && c == '1' ){
            zero.pop();
        }
        else if(zero.empty() && c == '1'){
           return false;
        }
    }

    return zero.empty();

}

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        string s;
        cin >> s;
        if (is_valid_string(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


//contest link:
//https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-04/challenges