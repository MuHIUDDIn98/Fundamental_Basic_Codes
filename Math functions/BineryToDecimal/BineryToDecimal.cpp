#include<iostream>
#include<math.h>
using namespace std;


int BintoDec(long int bin){

int dec = 0;
int i = 0;
int remainder;

for(i=0; bin != 0; i++){
remainder = 0;
remainder = bin % 10;
dec = dec + remainder * pow(2,i);
bin = bin/10;
}

return dec;
}

int main(){
long int bin;
cout<<"Enter your binery number :";
cin>>bin;
cout<<endl;

int decimal = BintoDec(bin);
cout<<" Decimal value of "<<bin<<"  is "<<decimal;


}