#include<iostream>
using namespace std;


int  main(){
int n;
cout<<"enter elem number array :"<<endl;
cin>>n;

int array[n];

cout<<"Enter your numbers : "<<endl;
    for(int x=0; x<n; x++) {
      cin>> array[x];
    }
  cout<<"print using for each loop"<<endl;
for(auto x :array){


cout<<x<<" ";


}


}