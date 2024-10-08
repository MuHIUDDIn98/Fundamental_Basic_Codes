#include<bits/stdc++.h>
using namespace std;

int main(){
    float total = 100.6;
    float &sum = total;//It provides an alias(another name) for a previously defined variable
    total+=300;
    cout<<"sum :"<<sum<<endl;
    sum+=200;
    cout<<"total :"<<total<<endl;

    return 0;
}