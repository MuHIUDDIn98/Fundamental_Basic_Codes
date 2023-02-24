#include<iostream>
using namespace std;
#define size 100
int main(){
char str[size];
int i ,length=0;
cout<<"Enter your string :";
cin>>str;

for(i=0;str[i] !='\0';i++){

  length ++;


}

cout<<"your string lenght is :"<<length;

return 0;
}