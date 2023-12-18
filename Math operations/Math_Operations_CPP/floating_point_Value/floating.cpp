#include<iostream>
#include<iomanip> //for printing floating point value
using namespace std;

int main(){
    double floatingpoint_Value = 10.343432843249895;
    char a[15] = "hi anik";
    cout<<fixed<<setprecision(10)<<floatingpoint_Value<<endl;
    cout<<fixed<<setprecision(8)<<floatingpoint_Value<<endl;
    cout<<fixed<<setprecision(6)<<floatingpoint_Value<<endl;
    cout<<fixed<<setprecision(4)<<floatingpoint_Value<<endl;
    cout<<a<<endl;
    return 0;
}