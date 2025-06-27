#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop through each row
    for (int i = 0; i < N; i++) {
        // Loop through each column in the row
        for (int j = 0; j < N; j++) {
            if (i == N / 2 && j == N / 2) {
                // Middle of the pattern
                cout << "X";
            } else if (i < N / 2 && j == i) {
                // Top-left: print '\'
                cout << "\\";
            } else if (i < N / 2 && j == N - 1 - i) {
                // Top-right: print '/'
                cout << "/";
            } else if (i > N / 2 && j == N - 1 - i) {
                // Bottom-left: print '/'
                cout << "/";
            } else if (i > N / 2 && j == i) {
                // Bottom-right: print '\'
                cout << "\\";
            } else {
                // Empty spaces
                cout << " ";
            }
        }
        cout << endl; // Move to next line
    }

    return 0;
}
