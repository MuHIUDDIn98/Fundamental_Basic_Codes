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

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int current_size = 1; 

    for (int i = 0; i < 4; i++) {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
    
            current_size += dfs(ci, cj);
        }
    }

    return current_size;
}

int main() {
    // Write your code here
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    memset(vis, false, sizeof(vis));

    vector<int> apartment_sizes;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            if (grid[i][j] == '.' && !vis[i][j]) {
    
                apartment_sizes.push_back(dfs(i, j));
            }
        }
    }

   
    sort(apartment_sizes.begin(), apartment_sizes.end());

    if (apartment_sizes.empty()) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < apartment_sizes.size(); i++) {
            cout << apartment_sizes[i] << (i == apartment_sizes.size() - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}