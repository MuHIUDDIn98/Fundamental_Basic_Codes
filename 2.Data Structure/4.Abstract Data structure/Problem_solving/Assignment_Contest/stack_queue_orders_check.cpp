#include<bits/stdc++.h>
using namespace std;


int main(){


   int N,M;
   cin>>N>>M;
   stack<int>s;
   queue<int>q;

   

   int stack_input;
   for(int i=1;i<=N; i++){
        cin>>stack_input;
        s.push(stack_input);
   }

   int queue_input;
   for(int i=1;i<=M; i++){
        cin>>queue_input;
        q.push(queue_input);
   }

   if (N != M) {
        cout << "NO" << endl;
        return 0;
    }


   while(!s.empty()){

    if(s.top() != q.front()){

        cout<<"NO"<<endl;
        return 0;
        

    }
    s.pop();
    q.pop();

   }


   cout<<"YES"<<endl;


return 0;
}