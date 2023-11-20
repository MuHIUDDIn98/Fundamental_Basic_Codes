
#include<bits/stdc++.h>
using namespace std;


 int gcd(int a, int b){
 if (b==0)
    return a;

 else
    return gcd(b,a%b);


 }
main(){
int n;
cout<<"Enter your number of element:";
cin>>n;

int a[n],i;
cout<<"Enter elements:";
for(i=0;i<n;++i){
    cin>>a[i];}


    int ans=a[0];
for(i=1;i<n;++i)
{
    ans=gcd(ans,a[i]);
}
cout<<"Your entered numbers are:";
for(i=0;i<n;++i){
    cout<<" "<<a[i];
}
cout<<endl;
cout<<"gcd of these numbers :"<<ans;




}
