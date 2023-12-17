#include<bits/stdc++.h>
using namespace std;


class myQuee
{public:
       list<int>L;

    void push(int val){
        L.push_back(val);
    }

    void pop(){
        L.pop_front();

    }

    int front(){
        return L.front();
    }
    int size(){
        return L.size();
    }
    bool empty(){
        return L.empty();
    }



};
int main(){
     myQuee q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {   
        int x;
        cin>>x;
        q.push(x);
    }

    while (!q.empty())
    {
       cout<<q.front()<<endl;
       q.pop();
       
    } 

    if(!q.empty()){
        cout<<q.front();
    }
    return 0;
}