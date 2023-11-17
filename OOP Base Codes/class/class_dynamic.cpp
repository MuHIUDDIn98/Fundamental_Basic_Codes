#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int id;
    int age;
    char name[100];

    Student(){
        cout<<"Default constructor called"<<endl;
    }
};

int main(){

Student karim; 
karim.id=3433;
karim.age = 15;


Student rahim;
rahim.id=35555;
rahim.age=25;

cout<<karim.id<<" "<<karim.age<<endl;
cout<<rahim.id<<" "<<rahim.age<<endl;

//creating object using constructor,
// whenever object created constructor called
Student *kakoli = new Student(); // dynamically created object
kakoli->id = 34;  //object reference
kakoli->age = 12;
strcpy(kakoli->name, "kakoli");
cout<<(*kakoli).id<<" "<<(*kakoli).age<<" "<<(*kakoli).name<<endl;
//we must delete dynamically allocated object manually
delete kakoli; //deallocation memory manually delete.....
 cout<<(*kakoli).id<<" "<<(*kakoli).age<<" "<<(*kakoli).name<<endl;//giving garbage value 


return 0;
}