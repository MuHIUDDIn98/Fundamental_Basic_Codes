#include<iostream>
using namespace std;


struct student{
string name;
int age;
int roll;
string section;

};
int main(){

student s[3];
for(int i=0;i<3;i++){
cout<<"Enter  information for student "<<i+1<<":";
cout<<"Enter Name :";
cin>>s[i].name;
cout<<endl;
cout<<"Enter Roll :";
cin>>s[i].roll;
cout<<"Enter section :";
cin>>s[i].section;
cout<<"Enter age :";
cin>>s[i].age;
}
cout<<"Here is your array of structure informantion"<<endl;
for(int i=0;i<3;i++){
cout<<"information for student "<<i+1<<":"<<endl;
cout<<"Name    :";
cout<<s[i].name;
cout<<endl;
cout<<"Roll    :";
cout<<s[i].roll;
cout<<endl;
cout<<"section :";
cout<<s[i].section;
cout<<endl;
cout<<"age     :";
cout<<s[i].age;
cout<<endl;
}


return 0;

}