#include<bits/stdc++.h>
using namespace std;


int main(){

    string s,d;
    cin>>s;
    cin>>d;
    cout<<s<<endl;
    cout<<d<<endl;
    s=s+d;     //concatination
    cout<<s<<endl;
    s+=d;      //concatination operator overloading.... 
    cout<<s<<endl;
    s.append(d);
    cout<<"Using Append :"<<s<<endl;
   
return 0;
}