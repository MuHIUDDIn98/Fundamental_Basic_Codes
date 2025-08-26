#include <bits/stdc++.h>
using namespace std;

// adjacency list
vector<int> v[1005];
// visited array and distance array
bool vis[1005];
int dist[1005];

// BFS function to find shortest path
int bfs(int src, int dest) {
    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist)); // initialize distances as -1

    queue<int> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0; // distance to itself is 0

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        for (int child : v[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                dist[child] = dist[par] + 1; // update distance
                
                // Stop if we reach the destination
                if (child == dest) {
                    return dist[child];
                }
            }
        }
    }
    return -1; // return -1 if no path found
}

int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges:" << endl;
    cin >> nodes >> edges;
    cout << "Enter edges:" << endl;
    
    // Read edges
    for (int i = 0; i < edges; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int queries;
    cout << "Enter number of queries:" << endl;
    cin >> queries;

    // Process each query
    while (queries--) {
        int src, dest;
        cout << "Enter source and destination:" << endl;
        cin >> src >> dest;
        
        int result = bfs(src, dest);
        if (result == -1) {
            cout << "No path found" << endl;
        } else {
            cout << "Shortest path from " << src << " to " << dest << " is " << result << endl;
        }
    }

    return 0;
}
