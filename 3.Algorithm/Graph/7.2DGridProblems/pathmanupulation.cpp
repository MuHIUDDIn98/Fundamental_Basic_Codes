#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int row, col;
pair<int, int> parent[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < row && j >= 0 && j < col);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;
        for (int i = 0; i < 4; i++)
        {

            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{
    cin >> row >> col;
    int si, sj, di, dj;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
                si = i, sj = j;
            if (grid[i][j] == 'D')
                di = i, dj = j;
        }
    }

    memset(vis, false, sizeof(vis));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            parent[i][j] = {-1, -1};

    bfs(si, sj);

    if (vis[di][dj])
    {
        // reconstruct path
        vector<pair<int, int>> path;
        int i = di, j = dj;
        while (i != -1 && i != -1)
        {
            path.push_back({i, j});
            auto p = parent[i][j];
            i = p.first, j = p.second;
        }
        reverse(path.begin(), path.end());

        // mark path
        for (auto [px, py] : path)
        {
            if (grid[px][py] == '.')
                grid[px][py] = 'X';
        }
    }

    // print final grid
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
