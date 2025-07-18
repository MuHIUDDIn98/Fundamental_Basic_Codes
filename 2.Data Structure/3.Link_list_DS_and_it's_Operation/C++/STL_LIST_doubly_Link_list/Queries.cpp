#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> &lst)
{
    // Forward
    cout << "L -> ";
    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse
    cout << "R -> ";
    for (auto rit = lst.rbegin(); rit != lst.rend(); ++rit)
    {
        cout << *rit << " ";
    }
    cout << endl;
}

int main()
{
    // Write your code here
    list<int> l;
    int Q;
    cin >> Q;

    while (Q--)
    {

        int X, V;
        cin >> X >> V;
        if (X == 0)
        { // Insert at head
            l.push_front(V);
        }
        else if (X == 1)
        { // Insert at tail
            l.push_back(V);
        }
        else if (X == 2)
        {
            if (V >= 0 && V < l.size())
            {
                l.erase(next(l.begin(), V));  // Delete from Vth index using Next
            } 
        }

        print_list(l);
    }

    return 0;
}