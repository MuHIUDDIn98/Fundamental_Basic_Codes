
#include<iostream>
using namespace std;

class student
{
private:

    int id;
    double gpa;
    string name;

public:
    void display(){
     cout<<"id:"<<id<<" "<<" gpa:"<<gpa<<" "<<name<<endl;
    }

    void setter(int id, double gpa, string name){
    
        this->id = id;
        this->gpa = gpa;
        this->name = name;

    }

    student(){

        cout<<"default constructor called"<<endl;
    }

    student(int x,double y,string name){

        id=x;
        gpa=y;
        this->name = name;
        cout<<"constructor called"<<endl;

    }


};


main()
{
 student alim(104,3.40,"alim ali");

 student lipi(105,3.45,"akter");

 student anik;
 anik.setter(3253,4.99,"anik ahmed");




     alim.display();
    lipi.display();
    anik.display();
}

