#include<bits/stdc++.h>
using namespace std;

int main(){
    //1
    // string s;
    // s ="hello";

     //2
    string s("hello_world");
    cout<<s<<endl;

    //3 resizing the string
    string p("Hello world",7);
    cout<<p<<endl;

    //4 substring constructor
    // This constructor creates a string from a substring of another string.
    // It takes two parameters: the original string and the starting index of the substring.
    string b = "Hello world";
    string f(b,4);
    cout<<f<<endl;
    
    //5
    string g(10,'A');
    cout<<g<<endl;
    
}