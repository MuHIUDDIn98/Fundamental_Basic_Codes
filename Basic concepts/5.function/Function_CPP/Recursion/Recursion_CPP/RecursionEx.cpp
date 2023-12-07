#include<iostream>
using namespace std;
void fun1(int x){

if(x>0){
cout<<"fun1 Number :"<<x<<endl; //Descending
 fun1(x-1);            
}



}

void fun2(int r){
if(r>0){
   fun2(r-1);
   cout<<"fun2 Number :"<<r<<endl;    //ascending
}
    
}

int main(){

fun1(10);
cout<<endl;
fun2(10);


}