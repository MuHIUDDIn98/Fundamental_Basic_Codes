#include<bits/stdc++.h>
using namespace std;

int main(){
    float total = 100.6;
    float &sum = total;
    total+=300;
    cout<<sum<<endl;


    return 0;
}