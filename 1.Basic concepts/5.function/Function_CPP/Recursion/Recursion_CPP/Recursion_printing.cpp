#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> printNTimes(int n) {
    if (n == 1) {
        vector<string> result = {"Coding Ninjas"};
        return result;
    } else {
        vector<string> result = printNTimes(n - 1);
        result.push_back("Coding Ninjas");
        return result;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<string> result = printNTimes(n);

    cout << "Output: ";
    for (const auto& str : result) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
