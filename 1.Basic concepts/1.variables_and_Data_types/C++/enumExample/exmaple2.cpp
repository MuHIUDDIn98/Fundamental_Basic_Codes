#include<bits/stdc++.h>
using namespace std;
enum days {sun, mon, tue, wed, thur, fri, sat};
int main(){
days d1,d2;
d1 = sun;
d2 = thur;
int diff = d2-d1; // using arithmetic operator
cout<<"Days between :"<<diff<<endl;
if(d1<d2) // using relational operator
    cout<<"d1 comes first";
 return 0;
}

