
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


};


main()
{
 student alim;
    //test hello test from pc again test
    alim.id=1214;
    alim.gpa=3.15;
    alim.display();



    student lipi;

    lipi.id=104;
    lipi.gpa=3.22;
    lipi.display();
}
