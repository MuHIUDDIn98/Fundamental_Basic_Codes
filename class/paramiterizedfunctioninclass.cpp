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

    void set_value(int x,double y){
      id=x;
      gpa=y;
    }


};


main()
{
 student alim,lipi;

     alim.set_value(104,3.50);
     alim.display();




    lipi.set_value(105,3.61);
    lipi.display();
}

