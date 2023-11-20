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
};

int main(){
    Person *rakib = new Person("Rakib ahsan",43);
    Person *akib = new Person("akib karim", 32); 
    *rakib = *akib;
    //rakib = akib
    //rakib->name = akib->name;
    //rakib->age = akib-name;

    cout<<rakib->name<<" "<<rakib->age<<" "<<endl;

    return 0;
}