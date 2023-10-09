#include <iostream>
using namespace std;

int checkPrime(int num)
{
    if(num < 2){
        return 0;
    }
    else{   
       int x = num/2;
        for(int i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    
    return 1;
}

int main()
{
    int a = 1, b = 100;
    int primecount=0;
    
    for(int i = a; i <= b; i++){
        if(checkPrime(i))
            cout<<i<<" ";
    }
    cout<<endl;


  cout<<"12th prime :";
     for(int i=2; i <= 100; i++){
        if(checkPrime(i)){
            primecount++;
            if(primecount==12)
            {
             cout<<i<<" ";
            }
           
        }    
    }

    cout<<endl;
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
//Time Complexity: O(N^2)
//Space Complexity O(1)