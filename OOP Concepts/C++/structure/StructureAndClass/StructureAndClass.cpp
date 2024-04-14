#include<iostream>
using namespace std;

int main(){

struct demo{
int x=10;
int y=444;

void Display(){

    cout<<"x ="<<x<<"  Y = "<<y<<endl;
}


};


demo d;
d.Display();
d.x=200;
d.y=50;
d.Display();


}


// The only difference between a structure and a class in C++ is that, by default, the
// members of a class are private, while, by default, the members of a structure are public.
