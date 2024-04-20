#include<bits/stdc++.h>
using namespace std;



void Str_reverse(string &s){
    int size = s.size();
    int l = 0;
    int r = s.size()-1 ;

    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
}



int main(){
    string s ="hello";
    cout<<s<<endl;
    for(auto &ch : s){
        cout<<ch<<endl;
    }
    cout<<s.size()<<endl;
    for(int i=0; i<3; i++){
        cout<<s[i]<<endl;
    }
    Str_reverse(s);
    cout<<s<<endl;

    return 0;
}