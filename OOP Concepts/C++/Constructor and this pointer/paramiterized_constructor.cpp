#include<bits/stdc++.h>
using namespace std;

class student{
public:
    int id;
    int age;
    char name[100];

    student(){
        cout<<"Default"<<endl;
    }

    student(int id, int age, char name[]){
        id = id;
        age = age;
        name = name;
       
    }
};

int main(){

//creating object using constructor,
// whenever object created constructor called
student *kakoli = new student(); // dynamically created object
strcpy(kakoli->name, "kakoli");
cout<<(*kakoli).id<<" "<<(*kakoli).age<<" "<<(*kakoli).name<<endl;
//we must delete dynamically allocated object manually
delete kakoli; //deallocation memory manually delete.....
 cout<<(*kakoli).id<<" "<<(*kakoli).age<<" "<<(*kakoli).name<<endl;//giving garbage value 


return 0;
}