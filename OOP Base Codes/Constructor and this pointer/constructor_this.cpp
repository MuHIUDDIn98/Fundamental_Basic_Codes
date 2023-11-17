#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
    int id;
    int roll;
    int cls;
    double gpa;

 Student(int roll,int id, int cls,double gpa){

    //this-> and (*this).variable are same.. this is a pointer 
    //  this->roll = roll;
    //  this->id = id;
    //  this->cls = cls;
    //  this->gpa = gpa;

     
     (*this).roll = roll;
     (*this).id = id;
     (*this).cls = cls;
     (*this).gpa = gpa;

     cout<<"paramiterized Constructor called"<<endl;
 }

};

int main(){
    
    Student rahim(21,4344,9,3.666) , karim(2,11111,9,3.9999);
    cout<<rahim.roll<<" "<<rahim.id<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.id<<" "<<karim.cls<<" "<<karim.gpa<<endl;

    return 0;
}