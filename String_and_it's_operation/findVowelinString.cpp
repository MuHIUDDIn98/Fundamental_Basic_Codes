#include<iostream>
using namespace std;
int main(){


 char str[10];
 cout<<"Enter your string :";
 cin>>str;
int i,count=0;

 for(i=0;str[i]!='\0';i++){

if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'){

    count ++;

}


 }

cout<<"Vowel number in your string :"<<count;
return 0;


}