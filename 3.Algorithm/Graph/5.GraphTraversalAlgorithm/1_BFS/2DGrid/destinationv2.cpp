#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int level[105][105];
int n, m;

vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j) {
    return !(i < 0 || i >= n || j < 0 || j >= m);
}

void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;   // source distance = 0

    while(!q.empty()) {
        auto [par_i, par_j] = q.front();
        q.pop();

        for(auto [dx, dy] : direction) {
            int ci = par_i + dx;
            int cj = par_j + dy;

            if(valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j]; 
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj;
    cin >> di >> dj;

    memset(vis, false, sizeof(vis));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            level[i][j] = -1;

    bfs(si, sj);

    if(level[di][dj] == -1)
        cout << "Destination is unreachable\n";
    else
        cout << "Distance from source to destination is: " << level[di][dj] << "\n";

    return 0;
}
