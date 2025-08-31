#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
int row, col;

pair<int, int> parent[1005][1005];

vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= col)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;

    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

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

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}

/*
5 5
A....
.###.
.###.
.###.
....B


*/

int main()
{

    cin >> row >> col;

    int si, sj, di, dj;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }

    // for(int i=0; i<row; i++){
    //     for(int j= 0; j<col; j++) {
    //          cout<<grid[i][j];
    //     }
    //     cout<<endl;
    // }

    // cout<<grid[si][sj]<<"     "<<grid[di][dj]<<endl;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);

    if (vis[di][dj])
    {
        cout << "YES\n";
        cout << "Shortest path length = " << level[di][dj] << "\n";
    // Path reconstruction
    vector<pair<int,int>> path;
    int x = di, y = dj;
    while(x != -1 && y != -1){
        path.push_back({x,y});
        auto p = parent[x][y];
        x = p.first; y = p.second;
    }
    reverse(path.begin(), path.end());

    // Mark path inside grid
    for(auto [px, py] : path){
        if(grid[px][py] == '.') grid[px][py] = 'x'; // don't overwrite A or B
    }
    }
    else
    {
        cout << "NO\n";
    }

    

    return 0;
}
