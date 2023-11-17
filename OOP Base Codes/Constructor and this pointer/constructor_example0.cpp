#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
    int id;
    int roll;
    int cls;
    double gpa;

 Student(int r,int i, int c,double g){
     roll = r;
     id = i;
     cls = c;
     gpa = g;
 }

};

int main(){
    
    Student rahim(21,4344,9,3.666);
    cout<<rahim.roll<<" "<<rahim.id<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;

    return 0;
}