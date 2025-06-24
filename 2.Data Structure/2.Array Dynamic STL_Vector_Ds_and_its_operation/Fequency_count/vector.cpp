#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;

    // Create a vector of size 26 initialized to 0 (for 'a' to 'z')
    vector<int> freq(26, 0);

    // Count frequency of each character
    for (char ch : S) {
        freq[ch - 'a']++;
    }

    // Print the result in ascending order of characters
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
