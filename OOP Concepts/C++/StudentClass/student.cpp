#include<iostream>
using namespace std;

class Student{
private:
int roll;
string name;
int subMark1;
int subMark2;
int subMark3;
public:
Student(int r,string n,int m1,int m2,int m3){

    roll=r;
    name=n;
    subMark1=m1;
    subMark2=m2;
    subMark3=m3;
    }

    int total();
    char grade();


};



int main(){
int r;
string n;
float s1,s2,s3;
cout<<"Enter your roll number :";
cin>>r;
cout<<"Enter your name  :";
cin>>n;

cout<<"Enter your number  :";
cin>>s1;
cin>>s2;
cin>>s3;
Student s(r,n,s1,s2,s3);
cout<<"total number :"<<s.total()<<endl;
cout<<"Your Grade :"<<s.grade()<<endl;



return 0;

}


char Student :: grade(){

float average = total()/3;
if(average>60){return 'A';}
else if(average>=40 && average<60){return 'B';}
else return 'c';

}

int Student :: total(){

 return subMark1+subMark2+subMark3;
}