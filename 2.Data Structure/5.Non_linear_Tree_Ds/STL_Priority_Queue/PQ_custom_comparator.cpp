#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
        string name;
        int number;

        Pair(string name, int num){
            this->name = name;
            this->number = num;
        }

};


class compare {
    public :
        bool operator()(Pair l, Pair r){

            if(l.name != r.name)
                return l.name > r.name;
            else   
                return l.number < r.number;

        }
};



int main(){
    
    priority_queue<Pair,vector<Pair>,compare> PQ;
    int T;
    cin >> T;

    while(T--){
        string name;
        int n;
        cin>>name>>n;
        Pair P(name,n);
        PQ.push(P);
    }

    while(!PQ.empty()){
        cout<<PQ.top().name<<" "<<PQ.top().number<<endl;
        PQ.pop();
    }
   
return 0;
}