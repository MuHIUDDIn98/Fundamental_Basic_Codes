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