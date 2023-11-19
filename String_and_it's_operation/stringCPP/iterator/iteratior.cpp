
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string :: iterator it;
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
    
    for(it=s.begin(); it<s.end(); it++){

        cout<<*it<<" ";
    }
    
    return 0;
}