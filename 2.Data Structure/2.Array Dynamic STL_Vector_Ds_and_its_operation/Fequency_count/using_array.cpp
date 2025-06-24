#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    // Frequency array for 'a' to 'z'
    int freq[26] = {0};

    // Count frequency
    for (char ch : S) {
        freq[ch - 'a']++;
    }

    // Output in ascending order
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
