#include<iostream>
using namespace std;



int main(){
    

/* the storage classes in 'C' Language decides:

@Scope of variable
@visibility of a variable or function
@Life time of a variable.

Scope,visibility and lifetime are features of a variable,
these features can be changed using storage class specifiers

there are two storage class specifiers
static 
extern

*/
void myfunction(void);


myfunction();
myfunction();
myfunction();
myfunction();
myfunction();


return 0;

}

void myfunction(void){
static int count=0;
count=count+1;
printf("the function executed %d\n",count);


}