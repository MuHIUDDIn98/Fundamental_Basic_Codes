#include<bits/stdc++.h>
using namespace std;
void Str_reverse(string &s,int l, int r){
        if(l>=r) return;
        swap(s[l],s[r]);
        Str_reverse(s,l+1,r-1);   
}



int main(){
    string s ="hello";
    cout << s<<endl;
    int size = s.size();
    int l = 0;
    int r = s.size()-1 ;

    Str_reverse(s,l,r);
    cout << s <<endl;

    return 0;
}