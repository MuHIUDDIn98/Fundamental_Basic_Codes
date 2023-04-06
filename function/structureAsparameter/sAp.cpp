#include<iostream>
using namespace std;
typedef struct rectangle{

int length;
int breadth;

}Rectangle;

int area( Rectangle *rectangle){  

 return rectangle->breadth*rectangle->length;

}

void changeLength(Rectangle *rectangle,int length){

    rectangle->length=length;
}
void changeBreadth(Rectangle *rectangle,int Breadth){

    rectangle->breadth=Breadth;
}




int main(){
rectangle r = {10,5};
cout<<"Length :"<<r.length<<endl;
cout<<"Breadth :"<<r.breadth<<endl;
cout<<"Area :"<<area(&r)<<endl;
changeLength(&r,50);
changeBreadth(&r,40);
cout<<"Length :"<<r.length<<endl;
cout<<"Breadth :"<<r.breadth<<endl;
cout<<"Area :"<<area(&r);
}