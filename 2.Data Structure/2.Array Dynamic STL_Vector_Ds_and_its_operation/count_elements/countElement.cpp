#include<bits/stdc++.h>
using namespace std;


int main(){

     int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> exists;

    // Input and build the set
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        exists.insert(a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (exists.count(a[i] + 1)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
   
return 0;
}