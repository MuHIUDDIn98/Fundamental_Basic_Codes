#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX = 105;
char grid[MAX][MAX];
bool vis[MAX][MAX];
int n, m;

vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j) {
    return !(i < 0 || i >= n || j < 0 || j >= m);
}

void dfs(int si, int sj) {
    vis[si][sj] = true;

    for (auto d : direction) {
        int ci = si + d.first;
        int cj = sj + d.second;

        if (valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'E')) {
            dfs(ci,cj);
        }
    }
}

int main() {
    cin >> n >> m;
    int si, sj, ei, ej;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') si = i, sj = j;
            if (grid[i][j] == 'E') ei = i, ej = j;
        }
    }

    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    // Check if E was reached
    if (vis[ei][ej]) cout << "Path exists!\n";
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