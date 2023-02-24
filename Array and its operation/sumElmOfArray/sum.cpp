#include<iostream>
using namespace std;

int main(){

int myArr[5];


cout<<"Enter your numbers : "<<endl;
    for(int x=0; x<5; x++) {
      cin>> myArr[x];


    }

for(int i=0; i<5; i++){
        cout<<"value of indx "<<i<<":"<<myArr[i] <<endl;


    }
    int sum=0;

    for(int i=0; i<5; i++){
      sum+=myArr[i];

    }
  cout<<"addition of those numbers :"<<sum<<endl;
}