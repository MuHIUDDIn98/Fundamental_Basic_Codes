#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int word_count = 0;
    while(ss>>word){

        for(char c:word){ //ranged base for loop
        //  if(isalpha(c)){
        //     word_count++;
        //     break;
        //  }
        if(c>='a' && c<='z' || c>='A' && c<='Z'){
            word_count++;
            break;
        }
         
        }
    
    }
    cout<<word_count<<endl;
    return 0;
}