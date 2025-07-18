#include <iostream>
#include <list>
using namespace std;

int main()
{


    // Write your code here
    list<int> myList;
    int val;
    
    while (cin >> val) {
        if (val == -1)
            break;
        myList.push_back(val);
    }

    myList.sort();
    myList.unique();

    for (int v : myList)
    {
        cout << v << " ";
    }
    cout << endl;



    return 0;
}