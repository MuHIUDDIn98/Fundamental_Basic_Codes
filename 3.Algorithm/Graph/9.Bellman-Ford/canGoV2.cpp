#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, e;
vector<Edge> edge_list;

long long dis[1005];

bool bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    dis[s] = 0;

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < edge_list.size(); j++)
        {
            Edge ed = edge_list[j];
            int u = ed.a;
            int v = ed.b;
            int w = ed.c;
            if (dis[u] != INF && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    bool cycle_found = false;
    for (int j = 0; j < edge_list.size(); j++)
    {
        Edge ed = edge_list[j];
        int u = ed.a;
        int v = ed.b;
        int w = ed.c;
        if (dis[u] != INF && dis[u] + w < dis[v])
        {
            cycle_found = true;
            break;
        }
    }
    return cycle_found;
}

int main()
{

    // Write your code here
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int s;
    cin >> s;

    if (bellman_ford(s))
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;
            if (dis[d] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}