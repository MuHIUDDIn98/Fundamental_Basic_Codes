#include<iostream>
using namespace std;
int c=400;
int myScore =900;
void myFunc1(void);
int main(){

int myScore =900;
printf("value of the variable myScore =%d\n",myScore);
myFunc1();
int a, b, c;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
c=a+b;
cout<<"sum of the values (a + b) :"<<c<<endl;
cout<<"The global Variable C is "<<::c;
}

void myFunc1(void){


   int myScore =700;
   printf("value of the variable myScore =%d\n",myScore);
   

}
