
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

    student(int x,double y){

        id=x;
        gpa=y;

    }

    student(){
    cout<<"default constructior test"<<endl;
    }


};


main()
{

    student obj;


 student alim(104,3.40);

 student lipi(105,3.45);


     alim.display();





    lipi.display();
}
