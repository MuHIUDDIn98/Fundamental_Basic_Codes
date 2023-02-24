#include<iostream>
using namespace std;

double pow(double b,int e){

    double result=1;
  for(int i= 0;i<= e;i++){
   result=result*b;

  

  } 

 return result;
}

int main(){

int base,exponent;
cout<<"What is the base?";
cin>>base;
cout<<"what is the exponent?";
cin>>exponent;
double power = pow(base,exponent);
cout<<"resutl of "<<power;


}