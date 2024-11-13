#include <bits/stdc++.h>
using namespace std;

// Adjacency list for the graph
vector<int> v[1005];

// Visit tracking array
bool vis[1005];

// Vector to store shortest path for each node
vector<int> shortestPath[1005];

// Array to keep track of each node's parent
int parent[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    parent[src] = -1; // Source has no parent

    while (!q.empty()) {
        int par = q.front();
        q.pop();
        cout << "Visiting node: " << par << endl;

        for (int child : v[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                parent[child] = par; // Set parent of child as par

                // Reconstruct the path from src to child
                int current = child;
                while (current != -1) {
                    shortestPath[child].push_back(current);
                    current = parent[current];
                }
                reverse(shortestPath[child].begin(), shortestPath[child].end());
            }
        }
    }
}

int main() {
    int n, e;
    cout<<"enter your node and edges number:"<<endl;
    cin >> n >> e;

    // Creating adjacency list according to given graph
    cout<<"enter your edges :"<<endl;
    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cout<<"enter your source node :"<<endl;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(src);

    // Display shortest path for each node
    cout << "Shortest paths from source " << src << ":\n";
    for (int i = 1; i <= n; i++) {
        if (i != src && !shortestPath[i].empty()) {
            cout << "Path to " << i << ": ";
            for (int node : shortestPath[i]) {
                cout << node << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
