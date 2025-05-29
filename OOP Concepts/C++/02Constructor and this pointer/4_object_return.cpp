#include<bits/stdc++.h>
using namespace std;


class Student{
 public:
    int id;
    int roll;
    int cls;
    double gpa;
//changing class variable using constructor
 Student(int r,int i, int c,double g){
     roll = r;
     id = i;
     cls = c;
     gpa = g;
     cout<<"constructor called"<<endl;
 }

 

};

Student returnObjFunc(int r,int i, int c ,double g){

    Student ret(r,i,c,g);
    return ret;
 }

int main(){
Student r =returnObjFunc(2,3,4,5);
cout<<r.cls<<"  "<<r.gpa<<"   "<<r.id<<"   "<<r.roll<<endl;

   
return 0;
}