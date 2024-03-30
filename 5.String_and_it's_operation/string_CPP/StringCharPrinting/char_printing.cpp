#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int j = 65;
    cin>>s;
    int s_size = s.length();
    cout<<"String size :"<<s_size<<endl;
    for(int i=0; i<s.length(); i++){

        cout<<"Before :"<<s[i]<<endl;
        s[i] = j;
        j++;
        cout<<"After :"<<s[i]<<endl;
    }
    return 0;
}