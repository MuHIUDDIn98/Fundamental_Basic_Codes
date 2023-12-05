#include <bits/stdc++.h>
using namespace std;
void fun(int *p){ //addressed received by pointer *p
    p = NULL; //function pointer change doesn't effect on mains pointer... if we don't dereferencing that pointer...
}
int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);//fun(&val)
    cout << *ptr << endl;
    return 0;
}