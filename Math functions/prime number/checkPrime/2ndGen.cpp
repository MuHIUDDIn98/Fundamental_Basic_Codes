#include<iostream>
using namespace std;

int checkPrime(int n){
    int count = 0;
    for(int i = 1; i*i <= n; i++ ){
        if(n % i == 0){
            count++;

        if((n / i) != i ){
           count++;
        }

        }

    }
    
    if(count == 2){
        return 1;

    }
 return 0;
}

int main(){

 int a = 1, b = 100;  
 cout<<"Enter your prime number range :";
    cin>>a>>b;
    for(int i= a; i <= b; i++){
        if(checkPrime(i))
            cout<<i<<" ";
    }


}