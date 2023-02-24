#include<iostream>
using namespace std;

int main(){

int A[5]{2,4,6,8,10};
int *p=A;
cout<<"pointing to A[0]"<<*p<<endl; //pointing to A[0]
p++;//pointer increment 
cout<<"pointing to A[1]"<<*p<<endl; //A[1]
p--;//pointer decrement
cout<<"pointing to A[0]"<<*p<<endl;//A[0]



cout<<"==============printing Address with element============ "<<endl;
for(int i=0;i<5;i++){

cout<<*(p+i)<<" "<<"("<<p+i<<")"<<"  ";

}
cout<<endl;
cout<<"==================== Addresses printing ============"<<endl;

for(int i=0;i<5;i++){
cout<<p+i<<" ";

}
cout<<endl;
cout<<"================Element Printing==================== "<<endl;

for(int i=0;i<5;i++){
cout<<i[A]<<" ";

}
cout<<endl;


cout<<"=================Addresses printing================ "<<endl;

for(int i=0;i<5;i++){
cout<<A+i<<" ";

}
cout<<endl;


int B[5]={22,33,44,55,66};
int *s=A;
cout<<"==============starting address print================"<<endl;
cout<<s<<endl;
for(int i=0;i<5;i++){

cout<<*s<<endl;
s++;

}
cout<<"=================Ending Address print==============="<<endl;
cout<<s<<endl;


cout<<"=================pointer difference================="<<endl;
int *e=B,*f=&B[4];
cout<<"pointer difference is :"<<f-e<<endl;
cout<<"pointer difference is :"<<e-f<<endl;

return 0;

}