#include<bits/stdc++.h>
using namespace std;

void print_N_to_one(int n){
    if(n<= 0) return;
    cout<<" " << n;
    print_N_to_one(n-1);

}

int main(){
    print_N_to_one(10);
    return 0;
}