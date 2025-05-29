#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        int age;
        int marks1;
        int marks2;
        string name;
        Person(string name,int age,int marks1, int marks2){
            this->name= name;
            this->age = age;
            this->marks1 = marks1;
            this->marks2 = marks2;
        }
        void display(){
            cout<<age<<" "<<name<<endl;
        }

        int total_marks(){
            return marks1+marks2;
        }
};

int main(){
    Person *rakib = new Person("Rakib ahsan",43,90,96);
    Person *akib = new Person("akib karim", 32,42,56); 
    rakib->display();
    cout<<rakib->total_marks()<<endl;
    akib->display();
    cout<<akib->total_marks()<<endl;

    return 0;
}