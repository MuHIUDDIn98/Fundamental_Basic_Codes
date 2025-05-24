#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin >> ws, sentence); // Use 'ws' to consume any leading whitespace

    cout << "You entered: \"" << sentence << "\"" << endl;

    return 0;
}