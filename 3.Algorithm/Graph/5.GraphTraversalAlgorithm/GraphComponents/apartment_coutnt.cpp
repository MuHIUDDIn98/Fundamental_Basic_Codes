#include<bits/stdc++.h>
using namespace std;


const int MAX = 1005;
char grid[MAX][MAX];
bool vis[MAX][MAX];
int n, m;

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj) {
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++) {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;


        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs(ci, cj);
        }
    }
}

int main() {
    // Write your code here
    cin >> n >> m;

    // Read the grid elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    memset(vis, false, sizeof(vis));

    int apartment_count = 0;

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        
            if (grid[i][j] == '.' && !vis[i][j]) {
                apartment_count++; // Increment the count
                dfs(i, j);         
            }
       }
    }


    cout << apartment_count << endl;

    return 0;
}