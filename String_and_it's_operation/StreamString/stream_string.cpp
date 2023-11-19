#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int count=0;
    getline(cin,s);
    stringstream ss(s);
    //ss<<s;    //without constructor...
    string word;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;

    while(ss>>word){
        cout<<word<<" ";
        count++;
    }
    cout<<endl;

    cout<<"words in this string :"<<count<<endl;
    
    return 0;
}