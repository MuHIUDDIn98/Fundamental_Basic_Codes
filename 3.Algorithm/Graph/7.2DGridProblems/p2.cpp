#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
char grid[MAXN][MAXN];
bool visited[MAXN][MAXN];
pair<int, int> parentCell[MAXN][MAXN];
int rows, cols;

vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int r, int c)
{
    return (r >= 0 && r < rows && c >= 0 && c < cols);
}

void bfs(int startRow, int startCol, int destRow, int destCol)
{
    queue<pair<int, int>> q;
    q.push({startRow, startCol});
    visited[startRow][startCol] = true;
    parentCell[startRow][startCol] = {-1, -1};

    while (!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();


        if (r == destRow && c == destCol)
            return;

        for (auto [dr, dc] : directions)
        {
            int nr = r + dr, nc = c + dc;
            if (isValid(nr, nc) && !visited[nr][nc] && grid[nr][nc] != '#')
            {
                visited[nr][nc] = true;
                parentCell[nr][nc] = {r, c};
                q.push({nr, nc});
            }
        }
    }
}

int main()
{
    cin >> rows >> cols;
    int startRow, startCol, destRow, destCol;

    // Input grid and locate R (start) and D (destination)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
                startRow = i, startCol = j;
            if (grid[i][j] == 'D')
                destRow = i, destCol = j;
        }
    }

    memset(visited, false, sizeof(visited));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            parentCell[i][j] = {-1, -1};

    // Run BFS
    bfs(startRow, startCol, destRow, destCol);

    // If destination is reachable → reconstruct path
    if (visited[destRow][destCol])
    {
        vector<pair<int, int>> path;
        int r = destRow, c = destCol;
        while (r != -1 && c != -1)
        {
            path.push_back({r, c});
            auto p = parentCell[r][c];
            r = p.first;
            c = p.second;
        }
        reverse(path.begin(), path.end());

        // Mark path with 'X' (except R and D)
        for (auto [pr, pc] : path)
        {
            if (grid[pr][pc] == '.')
                grid[pr][pc] = 'X';
        }
    }

    // Print final maze
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }
}
