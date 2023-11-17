#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
    int id;
    int roll;
    int cls;
    double gpa;

 Student(int roll,int id, int cls,double gpa){

     this->roll = roll;
     this->id = id;
     this->cls = cls;
     this->gpa = gpa;


     cout<<"paramiterized Constructor called"<<endl;
 }

};

Student* func(){
Student *rahim = new Student(21,4344,9,3.666) ;
return rahim;  //returning rahim  dynamic object..
}

int main(){
    
    Student *ans = func(); 
    cout<<(*ans).roll<<" "<<(*ans).id<<" "<<(*ans).cls<<" "<<(*ans).gpa<<endl;
    cout<<ans->roll<<" "<<ans->id<<" "<<ans->cls<<" "<<ans->gpa<<endl;

    delete ans;

    cout<<ans->roll<<" "<<ans->id<<" "<<ans->cls<<" "<<ans->gpa<<endl;


    return 0;
}