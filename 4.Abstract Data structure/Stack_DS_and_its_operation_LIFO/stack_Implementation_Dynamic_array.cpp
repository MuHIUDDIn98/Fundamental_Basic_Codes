#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    st.push(17);

    cout << "before loop" << endl;
    while (true)
    {

        if (!st.empty())

        {   cout << st.top() << endl;
            st.pop();         
        }
        else
        {
            cout << "invalid" << endl;
            break;
        }
    }


    return 0;
}