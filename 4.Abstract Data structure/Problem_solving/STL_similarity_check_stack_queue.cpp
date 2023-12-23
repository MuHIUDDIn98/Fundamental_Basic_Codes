#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    stack<int>st1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    queue<int>t2;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        t2.push(y);
    }

    bool similar = true;

    if (st1.size() != t2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    else if (st1.size() == t2.size())
    {

        while (!st1.empty())
        {


            if (st1.top() != t2.front())
            {
                similar = false;
            }

            st1.pop();
            t2.pop();
        }
    }

    if (similar)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}