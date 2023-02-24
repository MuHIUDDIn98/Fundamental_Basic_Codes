#include<iostream>
#include<stdlib.h>
using namespace std;

main(){
for(int i=0; i<=5; i++)
{


int random_number= rand()%6;
cout<<"randomNumber"<<i<<"="<<random_number<<endl;

cout<<"randomNumber"<<i<<"++="<<random_number+1<<endl;

}
}
