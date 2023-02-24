#include<iostream>
using namespace std;

int main(){

int x=10;
int &y=x;//y is not occupied in memeory
y++;

cout<<y<<endl;
x++;

cout<<x<<endl;
y++;

cout<<x<<endl;


}