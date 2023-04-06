#include<iostream>
using namespace std;

int* function(){
int *p=new int[3];
p[0]=11;
p[1]=21;
p[2]=31;
return p;
}


int main(){
int *A=function();
cout<<A[0]<<endl;
cout<<A[1]<<endl;
cout<<A[2]<<endl;


}