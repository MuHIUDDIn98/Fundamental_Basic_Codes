#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100] = "hello";
    //we use strcpy() to assign string in char array...
    strcpy(s,"Gello");
    cout<<s<<endl;

    string a = "hello anik";
    string b = "hello anik";
    cout<<a<<endl;
    a="Gello";
    cout<<a<<endl;
    a = "hello anik";

    //comapare string...
    if(a == b){

        cout<<a<<" || "<<b<< " "<< "are same string.."<<endl;
    }
    else{

        cout<<a<<" "<<b<< " "<< "are not same string.."<<endl;
    }
    



      //s="Gello"; we can not assing new string 2nd time..

    return 0;
}