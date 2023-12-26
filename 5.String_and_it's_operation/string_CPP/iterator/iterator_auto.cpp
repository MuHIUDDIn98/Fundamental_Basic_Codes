
#include<bits/stdc++.h>
using namespace std;
 //use g++ 14/17 minimum
int main(){
    string s;
    cin>>s;
    
    // for(int i=0; i<s.size(); i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<s.size(); i++){

    //     cout<<*(s.begin()+i)<<" ";
    // }
    // cout<<endl;

    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;
    
    for(auto it=s.begin(); it<s.end(); it++){

        cout<<*it<<" ";
    }
    
    return 0;
}