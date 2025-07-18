#include<bits/stdc++.h>
using namespace std;




int main(){
int Q;
cin >> Q;
list<int> l;
while(Q--){
    int type, x;
    cin >> type;
    if(type == 1){ // Insert at tail
        cin >> x;
        l.push_back(x);
    } else if(type == 0){ // Insert at head
        cin >> x;
        l.push_front(x);
    } else if(type == 2){ // delete at position
        int pos;
        cin >> pos >> x;
        auto it = l.begin();
        advance(it, pos);
        l.insert(it, x);
    } else if(type == 4){ // Delete by value
        cin >> x;
        l.remove(x);
    } else if(type == 5){ // Print list
        for(auto val : l) {
            cout << val << " ";
        }
        cout << endl;
    }
}

   
return 0;
}