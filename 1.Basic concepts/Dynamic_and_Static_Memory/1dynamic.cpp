#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){

    int *x = new int; //creating a dynamic memory in heap and declear a pointer x , 

    *x=100;
    p=x;  //keep the address of that dynamic memory in pointer p
    cout<<"x-->"<<*p<<endl;

}

int main(){
    
  fun();
  cout <<"x-->"<<*p << endl;
 return 0;

}
