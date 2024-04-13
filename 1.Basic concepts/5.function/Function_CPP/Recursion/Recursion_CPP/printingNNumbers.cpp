#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if (i>=n) return;
    cout<<"1 to N :"<<i<<endl;
    f(i+1,n);
    cout<<i<<endl;
    

}

int main(){
    int Num;
    cin>>Num;
    f(1,Num);
    return 0;
}