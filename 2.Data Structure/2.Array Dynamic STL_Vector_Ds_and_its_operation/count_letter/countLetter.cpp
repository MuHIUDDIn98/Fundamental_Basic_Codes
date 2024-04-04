#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    string S;
    map<char,int>char_count_map;
    cin>>S;

    for(char c:S){
        char_count_map[c]++;
    }

    for (const auto& pair : char_count_map) {
        cout << pair.first << " : " << pair.second <<endl;
    }

    return 0;
}