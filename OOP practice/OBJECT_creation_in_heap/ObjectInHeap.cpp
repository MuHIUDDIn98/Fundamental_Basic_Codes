#include<iostream>
using namespace std;

int main(){
class rec{
public:
int length;
int width;

int area(){
    return length*width;
}

int perimeter(){

    return 2*(length*width);
}

};

rec r1,r2,r3;

r1.length=120;
r1.width=55;

cout<<"r1 Objects area: "<<r1.area()<<endl;
cout<<"r1 Objects Perimeter: "<<r1.perimeter()<<endl;

rec *p;  //pointer in stack 
p=new rec; //creating a heap memory object
p->length=35;
p->width=35;
cout<<"r2 Objects area: "<<p->perimeter()<<endl;
cout<<"r2 Objects Perimeter: "<<p->area()<<endl;

rec *q=new rec;
q->length=77;
q->width=36;
cout<<"r3 Objects area: "<<q->perimeter()<<endl;
cout<<"r3 Objects Perimeter: "<<q->area()<<endl;
    
}