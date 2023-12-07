#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream f(s);
    string jessica ;
    bool jessica_found = false;
    while(f>>jessica){
        if(jessica == "Jessica"){
           jessica_found = true;
        }
    }

    if(jessica_found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
     

    return 0;
}