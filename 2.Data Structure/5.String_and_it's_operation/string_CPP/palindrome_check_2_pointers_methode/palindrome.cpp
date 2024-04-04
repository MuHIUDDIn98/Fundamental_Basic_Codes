#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag = 1;
    for(int i=0,j=s.size()-1; i<j;i++,j--){
      if(s[i]!= s[j]){
        flag = 0;
      }
    }
    if(flag == 1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"Not palindroem"<<endl;
    }
    return 0;
}