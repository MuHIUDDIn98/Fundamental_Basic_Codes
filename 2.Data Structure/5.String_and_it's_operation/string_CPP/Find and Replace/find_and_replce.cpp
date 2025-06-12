#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);



    /*s.find("EGYPT") returns the index (position) of the first occurrence of the word "EGYPT"
    in the string s.If the word is not found, find() returns string::npos, which equals -1
     in many implementations So the loop runs as long as "EGYPT" is found in the string..*/

    while(s.find("EGYPT") != -1){
      //s.replace(pos, len, replacement)
        s.replace(s.find("EGYPT"),5,"**");
        /*So it replaces "EGYPT" (which has 5 characters) with " " (a single space).*/
    }
    cout<<s<<endl;
    return 0;
}