#include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {
vector<int> result;
    // Base case: when x reaches 1, return a vector with a single element
    if (x == 1) {
        result.push_back(x);
    } 
    // Recursive case: generate array from x to 2, then append 1
    else {
        result.push_back(x);
        // Concatenate the result of recursive call with the current result
        vector<int> recursive_result = printNos(x - 1);
        result.insert(result.end(), recursive_result.begin(), recursive_result.end());
    }

    return result;
}

int main() {
    vector<int> NtoOne = printNos(9);
    for (const auto& num : NtoOne) {
       cout << num << " ";
    }
    cout <<endl;

    return 0;
}
