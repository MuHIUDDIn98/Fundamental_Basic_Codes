#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    int age;
    string name;
    Person(string name,int age){
        this->name= name;
        this->age = age;
    }
    void display(){
        cout<<age<<" "<<name<<endl;
    }
};

int main(){
    Person rakib("Rakib ahsan",43);
    Person akib("akib karim", 32); 
    rakib.display();
    akib.display();

    return 0;
}