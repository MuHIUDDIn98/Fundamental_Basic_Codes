#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int>A(N);
    for(int &x : A){
      cin>>x;
    }
   
    sort(A.begin(), A.end());

    bool found_Duplicate = false;

   
    for (int i = 1; i < N; ++i) {
        if (A[i] == A[i - 1]) {
            found_Duplicate = true;
            break;
        }
    }

    if (found_Duplicate) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }

    return 0;
}