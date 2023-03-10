#include<iostream>
using namespace std;


class base{
public:
int a;
void Display(){
cout<<"Display message"<<a<<endl;
}
};


class Deriaved:public base{
    public: 
    int b;
    void show(){
  
   cout<<"showing form Derived class  "<<b<<endl;

    }

};

int main(){

base b;
b.Display();

Deriaved inherit;
inherit.a=100;
inherit.Display();
inherit.b=500;
inherit.show();


   
}