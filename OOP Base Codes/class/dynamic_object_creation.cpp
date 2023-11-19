#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int id;
    int age;

    Student(int id, int age){
        this->id=id;
        this->age = age;
        cout<<"Default constructor called"<<endl;
    }
};

int main(){



//creating object using constructor,
// whenever object created constructor called
Student *kakoli = new Student(2,25); // dynamically created object
Student *rahim = new Student(5,31);


cout<<(*rahim).id<<" "<<(*rahim).age<<" "<<endl;
cout<<(*kakoli).id<<" "<<(*kakoli).age<<" "<<endl;


//we must delete dynamically allocated object manually
delete kakoli; //deallocation memory manually delete.....
delete rahim;


cout<<(*kakoli).id<<" "<<(*kakoli).age<<" "<<endl;//giving garbage value 
cout<<rahim->id<<" "<<rahim->age<<" "<<endl;    //  (*rahim).id or rahim->id



return 0;
}