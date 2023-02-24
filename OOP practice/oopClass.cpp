#include<iostream>
using namespace std;

class Employee{
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
       cout<<"Name -"<<Name<<endl;
       cout<<"Company -"<<Company<<endl;
       cout<<"Age -"<<Age<<endl;
       cout<<endl;
       cout<<endl;
        
        

    }
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }

};


int main(){

Employee employee1=Employee("anik","M&T",24);
/*employee1.Name="anik";
employee1.Company="M&T";
employee1.Age=24;
*/
employee1.IntroduceYourself();


 Employee employee2 =Employee("ashik","M&T",29);
 /*employee2.Name="Shihab";
 employee2.company="M&T";
 employee2.Age=29;
*/
employee2.IntroduceYourself();

Employee employee5=Employee("sizan","M&T",28);
employee5.IntroduceYourself();

return 0;
}