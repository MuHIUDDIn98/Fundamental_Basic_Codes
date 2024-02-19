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

Student func(){
Student rahim(21,4344,9,3.666) ;
return rahim;  //returning rahim object..
}

int main(){
    
    Student ans = func();  //it gives a copy of that object.. and deleted from stack memory
    cout<<ans.roll<<" "<<ans.id<<" "<<ans.cls<<" "<<ans.gpa<<endl;


    return 0;
}