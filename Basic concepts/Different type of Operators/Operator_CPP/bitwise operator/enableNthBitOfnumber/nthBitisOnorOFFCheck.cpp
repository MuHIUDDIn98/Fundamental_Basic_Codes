#include<iostream>
using namespace std;
int main(){

int num,n;
cout<<"Enter your number:";
cin>>num;

cout<<"Enter your nth bit number: ";
cin>>n;
num=num & 1<<(n-1);

if(num == 0){


    cout<<n<<"th bit is set on"<<endl;

}
else{


    cout<<n<<"th bit is off"<<endl;
}

return 0;

}