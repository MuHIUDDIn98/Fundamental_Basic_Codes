#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter Element of array :"<<endl;
cin>>n;
int myArr[n];


cout<<"Enter your numbers : "<<endl;
    for(int x=0; x<n; x++) {
      cin>> myArr[x];


    }

for(int i=0; i<n; i++){
        cout<<"value of indx "<<i<<":"<<myArr[i] <<endl;


    }
    int sum=0;

    for(int i=0; i<n; i++){
      sum+=myArr[i];

    }
  cout<<"addition of those numbers :"<<sum<<endl;

  double avr =(double)sum/n;

  cout<<"average of those numbers :"<<avr<<endl;

}