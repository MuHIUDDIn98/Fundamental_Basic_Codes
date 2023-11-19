#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,d,e,f;
    cin>>s;
    cin>>d;
    cin>>e;
    cout<<s<<endl;
    cout<<d<<endl;
    s=s+d;     //concatination
    cout<<s<<endl;
    s+=e;      //concatination operator overloading....
    cout<<s<<endl;

    cin>>f;
    s.append(f);
    cout<<s<<endl;

    //adding a char in the last of string..
    s.push_back('A');
    cout<<s<<endl;
    //removing last char from string...
    s.pop_back();
    cout<<s<<endl;

    //assign.
    d.assign("test ");
    cout<<d<<endl;
    s= s+d;
    cout<<s<<endl;

    //erase...
    s.erase(4,5);
    cout<<s<<endl;

    //erease+replase 
    s.replace(4,5,"aakib ");
    cout<<s<<endl;

    //insert 
    s.replace(4,0,"israt ");
    cout<<s<<endl;
    s.insert(4,"anika ");
    cout<<s<<endl;

    return 0;
}