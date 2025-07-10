#include<bits/stdc++.h>
using namespace std;


int main(){


   // copy element from vector
    vector<int> v = {11, 22, 33, 44, 55};
    list<int> mylist8(v.begin(), v.end());
    cout << "all element of mylist8" << endl;
    for (auto it = mylist8.begin(); it != mylist8.end(); it++)
    {   
        cout<<*it<<endl;
    }

    // ranged based for loop
    for (int val : mylist8)
    {
        cout << val << " ";
    }
return 0;
}