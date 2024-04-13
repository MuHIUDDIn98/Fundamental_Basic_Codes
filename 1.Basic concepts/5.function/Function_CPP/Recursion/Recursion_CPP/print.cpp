#include <iostream>
#include <vector>

using namespace std;

vector<int> generateArray(int n) {
    // Base case: when n is 1
    if (n == 1) {
        vector<int> result = {1};
        return result;
    }
    // Recursive case: generate array from 1 to n-1, then append n
    else {
        cout<<" n :"<<n<<endl;
        vector<int> result = generateArray(n - 1);
        result.push_back(n);
        cout<<"Pushed :"<<n<<endl;
        return result;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> result = generateArray(n);

    cout << "The array containing integers from 1 to " << n << " is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
