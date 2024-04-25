#include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {
    // Base case: when x reaches 1, return a vector with a single element
    if (x == 1) {
        vector<int> result = {1};
        cout<<x<<endl;
        cout<<"pushed :"<<x<<endl;
        return result;
    } 
    // Recursive case: generate array from x to 2, then append 1
    else {
        cout<<x<<endl;
        vector<int> result = printNos(x - 1); // Recursive call to generate array from x-1 to 1
        result.push_back(x); // Append x to the result vector
        cout<<"Pushed :"<<x<<endl;
        return result;
    }
}

int main() {
    vector<int> oneToN = printNos(9);
    for (const auto& num : oneToN) {
        cout <<"print :"<< num << " ";
    }
    cout << endl;

    return 0;
}
