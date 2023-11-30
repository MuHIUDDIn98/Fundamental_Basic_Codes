#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,x;
    int T;
    cin>>T;
    while(T--){
        cin>>s>>x;
        cout<<s<<endl;
        cout<<x<<endl;
        int x_length=x.length();
        cout<<x_length<<endl;
        
        while(s.find(x) != -1){
        s.replace(s.find(x),x_length,"#");
    }
    cout<<s<<endl;

    }
  
  
    return 0;
}