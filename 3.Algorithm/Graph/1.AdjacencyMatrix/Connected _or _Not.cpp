#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, E;
    cin >> N >> E;
    int matrix[N][N];

    // initialize all with 0
    memset(matrix, 0, sizeof(matrix));

    // self-loops
    for(int i = 0; i < N; i++) {
        matrix[i][i] = 1;
    }

    // read edges
    while(E--) {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;  // directed edge
    }

    int Q;
    cin >> Q;
    while(Q--) {
        int u, v;
        cin >> u >> v;
        if(matrix[u][v] == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
