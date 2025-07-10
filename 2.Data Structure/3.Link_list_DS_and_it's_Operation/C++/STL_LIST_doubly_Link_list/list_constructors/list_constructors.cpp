#include <bits/stdc++.h>
using namespace std;

int main()
{

    // list decleration
    list<int> mylist;

    // size calculation
    cout << "mylist size :" << mylist.size() << endl;

    // initialize with size 10
    list<int> mylist1(10);
    cout << "mylist1 size :" << mylist1.size() << endl;

    // initiallize with 10 size and component all component 5
    list<int> mylist2(10, 5);

    // printing front of the link list
    cout << "front of mylist2 :" << mylist2.front() << endl;

    // printing all element of linklist using iteratior
    cout << "all element of mylist2 " << endl;
    for (auto it = mylist2.begin(); it != mylist2.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;

    // link list initialze with values
    list<int> mylist5 = {1, 2, 3, 4, 5};

    // link list copy to another link list..
    list<int> mylist6(mylist5);
    cout << "all element of mylist6" << endl;
    for (auto it = mylist6.begin(); it != mylist6.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    int array[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 22, 33, 44, 55, 66};
    // copy from array to list
    list<int> mylist7(array, array + 16);

    cout << endl;
    cout << "all element of mylist7" << endl;
    // iterator
    for (auto it = mylist7.begin(); it != mylist7.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // copy element from vector
    vector<int> v = {11, 22, 33, 44, 55};
    list<int> mylist8(v.begin(), v.end());
    cout << "all element of mylist8" << endl;
    for (auto it = mylist8.begin(); it != mylist8.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    // ranged based for loop
    for (int val : mylist8)
    {
        cout << val << " ";
    }

    return 0;
}