#include<bits/stdc++.h>
using namespace std;

int find_gcd(int a, int b){
int gcd=1;

for(int i=1;i<=min(a,b);i++){
    if(a%i==0 && b%i==0){
        gcd = i;
    }
}

return gcd;
}

int main(){
    cout<<find_gcd(12,15)<<endl;
    return 0;
}