#include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {

    vector<int>result;
    // Base case: when x reaches 1, return a vector with a single element
    if (x == 1) {
        result.push_back(x);
    } 
    // Recursive case: generate array from x to 2, then append 1
    else {
        result.push_back(x);
        printNos(x - 1);
    }

 return result;
}

int main() {
    vector<int> oneToN = printNos(9);
    for (const auto& num : oneToN) {
        cout <<"print :"<< num << " ";
    }
    cout << endl;

    return 0;
}
