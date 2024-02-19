#include<iostream>
using namespace std;

int main(){

class rec {
public:
int l;
int B;

float Area(){

return l*B;

}

float Perimeter(){

   return 2*(l+B);
}

};



rec re1,re2;

re1.l=44;
re1.B=33;


cout<<"Area of  re1 :"<<re1.Area()<<endl;
cout<<"Perimeter of re1 :"<<re1.Perimeter()<<endl;

    
rec *p;
p= &re2;
p->l=22;
p->B=32;
cout<<"Area of  re2 :"<<p->Area()<<endl;
cout<<"Perimeter of re2 :"<<p->Perimeter()<<endl;




}