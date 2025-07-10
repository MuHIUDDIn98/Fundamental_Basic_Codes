#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {1, 2, 3, 4};
    // maximum size finder..
    cout << "mylist maximum size :" << mylist.max_size() << endl;
    for (int val : mylist)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << "my list size :" << mylist.size() << endl
         << endl;

    // clearing mylist..
    mylist.clear();
    cout << "after clearing " << endl;
    cout << "mylist size :" << mylist.size() << endl
         << endl;

    mylist = {5, 6, 7, 8};
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "mylist size :" << mylist.size() << endl
         << endl;

    // resizing my list..
    cout << "reaizing" << endl;
    mylist.resize(2);
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "mylist size :" << mylist.size() << endl
         << endl;

    // resizing mylist..
    mylist.resize(6);
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "mylist size :" << mylist.size() << endl
         << endl;

    // resizing with value..
    mylist.resize(10, 100);
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "mylist size :" << mylist.size() << endl
         << endl;
    return 0;
}