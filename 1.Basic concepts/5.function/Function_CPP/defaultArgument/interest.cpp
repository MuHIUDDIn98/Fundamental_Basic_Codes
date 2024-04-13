#include<bits/stdc++.h>
using namespace std;
float interest(int p, int t = 5, float r = 5.0);
int main(){

    float rate, i1,i2,i3;
    int pr , yr;
    cout<<"Enter principal, rate and year :";
    cin>>pr>>rate>>yr;
    i1=interest(pr ,yr ,rate);
    i2=interest(pr , yr);
    i3=interest(pr);
    cout<<i1<<" "<<i2<<" "<<i3;

    return 0;
}

float interest(int p, int t, float r)
{
    return((p*t*r)/100);
}