#include<iostream>
#include<stdio.h>

using namespace std;
int main(){


int data =100;  //initialization 

printf("printing the value of data is %d\n",data);

char* pAddress=(char*)&data;//type casting for character
int* PAddress=&data;
printf("(address/pointer) value of data :  %p\n",&data);
printf("address/pointer of pAddress :  %p\n",&pAddress);
char value = *pAddress;         //dereferencing pointer 
int value1=*PAddress;

printf("the value of data printing using dereferencing pAddress is %d \n",value);
printf("the value of data printing using dereferencing PAdderss is %d \n",value1);

*pAddress=69;
printf("Changing value using derferencing %d\n",data);
*PAddress=70;
printf("Changing value using derferencing %d\n",data);

}