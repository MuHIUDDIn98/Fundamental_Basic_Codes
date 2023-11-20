#include<bits/stdc++.h>
using namespace std;
void r_print(stringstream & ss){
    string word;
    if(ss>>word){
        cout<<word<<endl;
        r_print(ss);
        cout<<"======"<<endl;
        cout<<word<<endl;
    }

}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    r_print(ss);


    return 0;
}