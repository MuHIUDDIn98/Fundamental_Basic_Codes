#include<iostream>
using namespace std;
main(){
//what is pointer ?---> data type which holds the address of other data type
//& --> address of operatior
//*---> dereferance  operator
int score=5;
cout<<"value of score :"<<score<<endl;
cout<<"address of score :"<<&score<<endl;
int *scr=&score;
cout<<"address of the score using scr :" << scr<< endl;
cout<<"value of the variable score using pointer :"<<*scr<<endl;

int *ip;  // pointer to an integer
double *dp;   // pointer to a double
float *fp;  // pointer to a float
char *ch;  // pointer to a character



int a = 12; int b = 13;

int * pa = &a;

int * pb = &b;


*pa += *pb; // same as a += b; -->a=a+b
cout<<"valut of the addition of a=12 + b=13 :"<<*pa<<endl;

/*
int var = 50;
    int  *p;
    p = &var;

    cout <<"value of var :"<< var << endl;
    // Outputs 50 (the value of var)

    cout <<"value of  the address of the var :"<< p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout <<"value of var using pointer :"<< *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */

     int x = 5;
    int *p = &x;

          // x = x + 4;
         // x = *p + 4;
         *p = *p + 4;

     cout<<"value of the variable a :"<<*p<<endl;

}
