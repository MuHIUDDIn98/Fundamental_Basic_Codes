#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char c : s)
    {
        cout << c << " " << endl;
        frq[c - 'a']++;
    }

    for (char i = 'a'; i < 'z'; i++)
    {
        if (frq[i - 'a'] > 0)
        {
            cout << i << "-" << frq[i - 'a'] << endl;
        }
    }

    for (char i = 'a'; i < 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i <<endl;
        }
    }
    return 0;
}