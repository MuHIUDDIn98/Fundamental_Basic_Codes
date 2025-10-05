#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code from here

    int n, e;
    cin >> n >> e;

    const long long INF = 1e18;

    long long adj_mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = INF;
            }
        }
    }

    while (e--)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;

        a--;
        b--;

        adj_mat[a][b] = min(adj_mat[a][b], c);
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (adj_mat[i][k] != INF && adj_mat[k][j] != INF)
                {

                    if (adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                    {
                        adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                    }
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;

        x--;
        y--;

        if (adj_mat[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj_mat[x][y] << endl;
        }
    }

    return 0;
}