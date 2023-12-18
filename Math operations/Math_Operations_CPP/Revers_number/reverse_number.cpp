#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int x;
    cin>>x;
    int originalNum = x;
    int reversedNum = 0;

    // Reverse the digits of the number
    while (x > 0) {
        int digit = x % 10;
        reversedNum = reversedNum * 10 + digit;
        x /= 10;
    }

    cout<<originalNum<<endl;
    cout<<reversedNum<<endl;


    return 0;
}