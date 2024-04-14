#include<bits/stdc++.h>
using namespace std;

inline float lbtokg(float lbs)
{
return (0.453 * lbs);
}

int main(){
    float lbs, kgs;
    cout<<"Enter weight in lbs:";
    cin>>lbs;
    kgs=lbtokg(lbs);
    cout<<"Weight in kg is "<<kgs;
return (0);
    return 0;
}


// When a function is defined as inline, compiler copies it s body where the function call is
// made, instead of transferring control to that function.