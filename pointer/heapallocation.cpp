#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter number of elements :";
cin>>size;
int *p=new int[size];

delete []p;//delete heap memory

cout<<"Enter new size";
cin>>size;
p=new int[size];//allocate bigger size array

}