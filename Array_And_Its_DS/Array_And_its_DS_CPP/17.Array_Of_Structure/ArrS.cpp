#include<iostream>
using namespace std;


struct student{
string name;
int age;
int roll;
string section;

};
int main(){
cout<<"Enter student number :"<<endl;
int n; 
cin>>n;
student s[n];
cout<<"Enter Name : Enter Roll: Enter Section : Enter Age";
cout<<endl;
for(int i=0;i<n;i++){
cin>>s[i].name>>s[i].roll>>s[i].section>>s[i].age;
}
cout<<"Here is your array of structure informantion"<<endl;
for(int i=0;i<n;i++){
cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].section<<" "<<s[i].age<<endl;
}


return 0;

}