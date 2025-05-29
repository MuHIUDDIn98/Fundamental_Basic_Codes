
#include<iostream>
using namespace std;

class student
{
public:

    int id;
    double gpa;
    void display(){
     cout<<"id:"<<id<<" "<<" gpa:"<<gpa<<endl;
    }
    //changing class variable using constructor
    student(int x,double y){

        id=x;
        gpa=y;
        cout<<"constructor called"<<endl;

    }


};


main()
{
 student alim(104,3.40);

 student lipi(105,3.45);


    alim.display();

    lipi.display();

    cout<<alim.id<<endl;
}

