#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int q;
    cin >> q;
   
    while (q--)
    {   int x, val;
        bool validFlag = true;
        cin >> x;
        cin >> val;
        if (x == 0)
        {
            myList.push_front(val);
           
        }
        else if (x == 1)
        {
            myList.push_back(val);
        }
        else if (x == 2)
        {    int size = myList.size();
            if (val >= size)
            {
                validFlag = false;
            }
            else
            {
                myList.erase(next(myList.begin(), val));
               
            }
        }
            if(validFlag){
                    cout<<"L -> ";
                    for (int val : myList)
                    {
                        cout << val << " ";
                    }
                    cout << endl;

                    myList.reverse();
                    cout<<"R -> ";
                    for (int val : myList)
                    {
                        cout << val << " ";
                    }
                    myList.reverse();
                    cout << endl;
                    }
            else{
                    cout<<"L -> ";
                    cout << endl;
                    cout<<"R -> ";
                    cout << endl;
            }
            
    }
    return 0;
}