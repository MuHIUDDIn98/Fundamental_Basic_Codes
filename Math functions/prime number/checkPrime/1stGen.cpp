#include<iostream>
using namespace std;

int checkPrime(int n){
    int count=0;
    for(int i = 1; i<=n ;i++){

        if(n%i == 0){
        count++;
        }
    }
    if(count == 2){

        return 1;
    }
return 0;
}

int main(){

    cout<<"Ener your number to check  prime :";
    int n;
    cin>>n;
    if(checkPrime(n)){

        cout<<"yes it is a prime number ";
    
    }
    else{

        cout<<"it is not a prime number ";
    }
 
    return 0;
}