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

cout<<"your string lenght is :"<<length<<endl;


char s[]={65,66,67,68,'\0'};
char t[]={69,70,71,72,73,74,0,75};
cout<<"charecter array s :"<<s<<endl;
cout<<"charecter array t :"<<t<<endl;

cout<<"Enter Element in s :";
cin>>s;
cout<<"you entered :";
cout<<s;
return 0;
}