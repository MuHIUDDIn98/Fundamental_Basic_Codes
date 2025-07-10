#include <bits/stdc++.h>
using namespace std;

int main()
{

    // link list initialze with values
    list<int> mylist1 = {1, 2, 3, 4, 5};

    // link list copy to another link list..
    list<int> mylist2(mylist1);
    cout << "all element of mylist1" << endl;
    for (auto it = mylist2.begin(); it != mylist2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}