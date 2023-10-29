#include<iostream>
using namespace std;
int main(){


 char str[10];
 cout<<"Enter your string :";
 cin>>str;
int i,vcount=0,ccount=0;

 for(i=0;str[i]!='\0';i++){

if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'||str[i]=='I'||str[i]=='i'){

    vcount ++;

}
else if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){

ccount++;
}


 }

cout<<"Vowel number in your string :"<<vcount<<endl;
cout<<"consonent number in your string :"<<ccount;


return 0;
}