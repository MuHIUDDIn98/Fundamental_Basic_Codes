#include <bits/stdc++.h>
using namespace std;

int main()
{  
    // Write your code here

    int N, E;

    cin >> N >> E;
    vector<int> AdcList[N];

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        AdcList[a].push_back(b);
        AdcList[b].push_back(a);
    }

    int Q;
    while (Q--)
    {
        int node;
        cin >> node;
        vector<int> neighbors = AdcList[node];
        sort(neighbors.rbegin(), neighbors.rend());
        for (int v : neighbors)
        {
            cout << v << " ";
        }
        cout << "\n";
    }

    return 0;
}