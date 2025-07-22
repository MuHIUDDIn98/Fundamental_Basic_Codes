#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<string> mylist;
    string s;

    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        mylist.push_back(s);
    }

    int q;
    cin >> q;
    string com, add;

    auto current = mylist.begin();
    auto tmp = current;

    while (q--)
    {
        cin >> com;
        if (com == "visit")
        {
            cin >> add;
            tmp = current;
            current = find(mylist.begin(), mylist.end(), add);
            if (current == mylist.end())
            {
                cout << "Not Available" << endl;
                current = tmp;
            }
            else
            {
                cout << *current << endl;
            }
        }
        else if (com == "next")
        {
            auto last = --mylist.end();
            if (current == last)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current++;
                cout << *current << endl;
            }
        }
        else if (com == "prev")
        {

            if(current == mylist.begin()){
                cout<<"Not Available"<<endl;
            }
            else{
                current --;
                cout<<*current<<endl;
            }
        }
    }
    return 0;
}

//https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-7/challenges/browser-history-1