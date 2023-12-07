#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        double cgpa;

};

int main(){
    Student rakul,rakib;
    rakul.roll = 32;
    rakul.cgpa = 3.999;
    //rakil.name = "rakul"  it is not possible after initialization
    char temp[100] = "rakul";
    strcpy(rakul.name,temp);  //copy temp to rakul.name
    
    cout<<"rakul's Roll :"<<rakul.roll<<"  rakul's cgpa :"<<rakul.cgpa<<" rakul's full name :"<<rakul.name<<endl;  

    cout<<"Enter rakul's information :"<<endl;
    // cin>> rakul.roll >> rakul.cgpa >> rakul.name;
    cin.getline(rakul.name,100);
    cin>> rakul.roll >> rakul.cgpa;
    cout<<"rakul's Roll :"<<rakul.roll<<"  rakul's cgpa :"<<rakul.cgpa<<" rakul's full name :"<<rakul.name<<endl;


    cout<<"Enter rakib's information :"<<endl;
    //cin>> rakib.roll >> rakib.cgpa >> rakib.name;

    
    getchar(); //to capture enter 
    cin.getline(rakib.name,100);
    cin>> rakib.roll >> rakib.cgpa;
    
    cout<<"rakib's Roll :"<<rakib.roll<<"  rakib's cgpa :"<<rakib.cgpa<<" rakib's full name:"<<rakib.name<<endl;

    return 0;
}