#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(int n){

     int original = n;
    int remainder=0;
    int reversed=0;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if(original == reversed)
        return true;


return false;
}


int main(){
    int n;
    cin>>n;
    cout<<is_palindrome(n);
   

    return 0;
}