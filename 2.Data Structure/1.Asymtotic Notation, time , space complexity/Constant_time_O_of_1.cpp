#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 200; //O(1)
    int y = x*200/45; //O(1)
    int i=5,j=4;
    if(i>j){
      j==0?j++:j--;
    }
    cout<<j<<endl;
    return 0;
}