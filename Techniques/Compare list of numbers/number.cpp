#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compareNumbers(int a ,int b) {
    if (a != b)
        return a < b; // Sort by marks in descending order
}

int main() {
    int N, Q;
    cin >> N;

    vector<int> Numbers;
    int num;
    for (int i = 0; i < N; ++i) {
        cin>>num;
        Numbers.push_back(num);
    }

    sort(Numbers.begin(), Numbers.end(), compareNumbers);

    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int command;
        cin >> command;

        if (command == 0) {
            cin>>num;
            Numbers.push_back(num);
            sort(Numbers.begin(), Numbers.end(), compareNumbers);
            cout << Numbers.front()<< endl;
        } else if (command == 1) {
            if (!Numbers.empty())
                cout << Numbers.front() << endl;
            else
                cout << "Empty" << endl;
        } else if (command == 2) {
            if (!Numbers.empty()) {
                Numbers.erase(Numbers.begin());
                if (!Numbers.empty())
                    cout <<Numbers.front()<< endl;
                else
                    cout << "Empty" << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
