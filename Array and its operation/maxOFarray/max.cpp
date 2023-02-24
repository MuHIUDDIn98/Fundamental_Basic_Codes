#include<iostream>
using namespace std;


int main(){
    int max=0;

int array[5]={2,3,4,5,6};
for(int i=0;i<5;i++){

if(array[i]>max){

max=array[i];
}
}

cout<<"Maximum number of array is :";
cout<<max;




}