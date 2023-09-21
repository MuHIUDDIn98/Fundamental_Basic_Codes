#include<iostream>
using namespace std;

int Factors[1000];

void factorFinder(int num){
for(int i = 1; i <= num; i++ ){
    if(num % i == 0 ){
  
      Factors[i] = i;
    }

    }
}

int main(){

int num;
cout<<"Enter your number here : ";
cin >> num;
factorFinder(num);

for(int i = 0; i<=1000; i++){

    if(Factors[i] > 0 )
    cout<<Factors[i]<<" ";   
}




}