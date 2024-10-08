#include<bits/stdc++.h>
using namespace std;

float perimeter(float r);
int perimeter(int a,int b);
int perimeter(int a,int b,int c);



int main(){

cout<<"Perimter of circle :"<<perimeter(2.0)<<endl;
cout<<"Perimter of rectangle :"<<perimeter(2,4)<<endl;
cout<<"Perimter of Triangle :"<<perimeter(1,3,4)<<endl;

    return 0;
}


float perimeter(float r){
    return (2*3.1416*r);
}

int perimeter(int l, int b){

    return (2*(l+b));
}

int perimeter(int a, int b, int c){

    return(a+b+c);
}