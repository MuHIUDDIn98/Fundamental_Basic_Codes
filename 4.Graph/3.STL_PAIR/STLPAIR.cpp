#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
        int first,second;
        void make_pair(int a, int b){
            first = a;
            second = b;
        }

};

int main(){

    Pair p;
    p.make_pair(23,45);

    cout<<p.first<<" "<<p.second<<endl;
    
    //STL pair
    pair<int,int> q;
    q = make_pair(100,200);
    cout<<q.first<<" "<<q.second<<endl;

    return 0;
}