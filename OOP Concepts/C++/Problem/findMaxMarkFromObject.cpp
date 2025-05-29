#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    char section;
    int math_Mark;
    int cls;

    Student(string name,int roll,char section,int math_Mark,int cls){

        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_Mark = math_Mark;
        this->cls = cls;

    }

};




int main(){

Student rahim("Rahim",12,'A',89,2);
Student atiq("Atiq",13,'A',970,2);
Student ashik("Ashik",14,'A',99,2);

int maximum  = max({rahim.math_Mark,atiq.math_Mark,ashik.math_Mark});
if(maximum == rahim.math_Mark){
    cout<<rahim.name<<endl;
}
else if(maximum == atiq.math_Mark){
    cout<<atiq.name<<endl;
}
else{
    cout<<ashik.name<<endl;
}

cout<<"maximum number :"<<maximum<<endl; 



   
return 0;
}