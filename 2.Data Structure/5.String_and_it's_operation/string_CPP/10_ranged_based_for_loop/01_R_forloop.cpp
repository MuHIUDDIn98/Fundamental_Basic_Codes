#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
   for(int i = 0; i < s.size(); i++){
    cout<<s[i]<<" ";
   }
   cout << endl;

   for(char c:s){ //ranged base for loop
    cout<< c <<" ";
   }
    cout << endl;
   for(auto c:s){ //ranged base for loop
    cout<< c <<" ";
   }
    
}