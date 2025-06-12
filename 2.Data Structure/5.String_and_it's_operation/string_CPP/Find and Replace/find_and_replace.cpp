#include<bits/stdc++.h>
using namespace std;


int main(){


   int T;
   cin>>T;

   while(T--){
    string s;
    string keyword;
    cin>>s>>keyword;
    while(s.find(keyword)!= -1){
        s.replace(s.find(keyword),keyword.length(),"#");
    }

    cout<<s<<endl;
   }
return 0;
}