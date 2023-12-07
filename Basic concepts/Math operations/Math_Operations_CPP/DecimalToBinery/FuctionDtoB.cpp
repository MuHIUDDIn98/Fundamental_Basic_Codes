#include<iostream>
using namespace std;

void DecimalToBinery(int n){
int i,B[10];

    for(i=0;n>0;i++){
    B[i]= n%2 ;
    n = n/2;
    }

    cout<<"Your converted Binery  number: ";
    for(i=i-1;i>=0;i--){

        cout<<B[i];
    }

}

void DecimalToOctal(int n){
int i,O[10];

    for(i=0;n>0;i++){
    O[i]= n%8 ;
    n = n/8;
    }

    cout<<"Your converted Octal  number: ";
    for(i=i-1;i>=0;i--){

        cout<<O[i];
    }


}

int main(){
int n;
cout<<"Enter your number :";
cin >> n;
DecimalToBinery(n);
cout<<endl;
DecimalToOctal(n);


}