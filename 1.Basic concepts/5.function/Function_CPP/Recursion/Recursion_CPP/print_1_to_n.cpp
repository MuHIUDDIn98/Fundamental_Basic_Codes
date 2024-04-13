#include<bits/stdc++.h>
using namespace std;

void print_One_to_N(int n){
    if(n<= 0) return;
    cout<<" " << n;
    print_One_to_N(n-1);
}

void print_N_to_one(int n){
    if(n<= 0) return;
    print_N_to_one(n-1);

    cout<<" " << n;
}

int main(){
    print_One_to_N(10);
    cout<<endl;
    print_N_to_one(10);
    return 0;
}