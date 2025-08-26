#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005; 
int n, m;
char grid[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

bool found = false;

void dfs(int si, int sj, int ei, int ej) {
    if (si == ei && sj == ej) {
        found = true;
        return;
    }
    vis[si][sj] = true;

    for (auto d : direction) {
        int ci = si + d.first;
        int cj = sj + d.second;

        if (valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B')) {
            dfs(ci, cj, ei, ej);
            if (found) return; // early stop
        }
    }
}

int main() {
     // Write your code here
    cin >> n >> m;

    int si = -1, sj = -1, ei = -1, ej = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') si = i, sj = j;
            if (grid[i][j] == 'B') ei = i, ej = j;
        }
    }

    if (si == -1 || ei == -1) {
        cout << "NO\n"; 
        return 0;
    }

    memset(vis, false, sizeof(vis));
    dfs(si, sj, ei, ej);

    cout << (found ? "YES" : "NO") << "\n";
    return 0;
}
