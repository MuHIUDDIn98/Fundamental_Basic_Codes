#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id , age;
    char name[100];
    

    

    Student(){
        cout<<"Default constructor"<<endl;
    }
    Student(int id,int age, char name[]){
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
        cout<<"paramiterized  constructor"<<endl;

    }
};


void compare_student_age(Student *st1, Student *st2){

    st1->age > st2->age ? cout<<st1->name<<"  is elder"<<endl : cout<<st2->name<<" is elder"<<endl;
}

int main(){
    int id,age;
    char name[100];

    cin>>id>>age;
    getchar();
    cin.getline(name,100);

    Student *st1 = new Student(id,age,name); //dynamic object with parameterized constructor


    Student *st2 = new Student(); //dynamic object with default constructor..
    st2->id = 44;
    st2->age = 21;
    strcpy(st2->name,"rahim ali");


    cout<<st1->id<<"  "<<st1->age<<"  "<<st1->name<<endl;
    cout<<st2->id<<"  "<<st2->age<<"  "<<st2->name<<endl;

    compare_student_age(st1,st2);

    delete st1;
    delete st2;

    cout<<st1->id<<"  "<<st1->age<<"  "<<st1->name<<endl;
    cout<<st2->id<<"  "<<st2->age<<"  "<<st2->name<<endl;



    return 0;
}