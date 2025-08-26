#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[105][105];
bool vis[105][105];
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

        if (valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'E')) {
            dfs(ci, cj, ei, ej);
            if (found) return; // stop recursion once target is found
        }
    }
}

int main() {
    cin >> n >> m;

    int si, sj, ei, ej;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') si = i, sj = j;
            if (grid[i][j] == 'E') ei = i, ej = j;
        }
    }

    memset(vis, false, sizeof(vis));
    dfs(si, sj, ei, ej);

    if (found) cout << "Path exists!\n";
    else cout << "No path found!\n";

    return 0;
}
/*


*******
*S..*.*
*.*.*.*
*.*...*
*..*E.*
*******




*/