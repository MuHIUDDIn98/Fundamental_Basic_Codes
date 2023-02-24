#include<iostream>
using namespace std;
int main(){

int num1, num2;
cout<<"Enter your numbers :";
cin>>num1>>num2;
cout<<"Here is your number :";
cout<<num1<<" "<<num2<<endl;

if((num1^num2) == 0){
cout<<num1<<"and "<<num2<<"Numbers are equal ";
}
else{
cout<<"they are not Equal";
}
    return 0;
}
