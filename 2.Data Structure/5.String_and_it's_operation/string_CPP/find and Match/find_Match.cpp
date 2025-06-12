#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    string s;
    string Extracted_word;
    getline(cin,s);
    stringstream sk(s);
    bool found = false;
    
    while(sk>>Extracted_word){

        if(Extracted_word == "Jessica"){
            found = true;
             break;
        }       
    }
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
