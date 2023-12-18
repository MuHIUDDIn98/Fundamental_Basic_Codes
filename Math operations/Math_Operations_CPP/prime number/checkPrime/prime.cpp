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
<<<<<<< HEAD:Math functions/prime number/prime.cpp
    int primecount=0;
=======
    cout<<"Enter your prime number range :";
    cin>>a>>b;
>>>>>>> 2662143014b24d420dc909172e8354b7872b2dcb:Math functions/prime number/checkPrime/prime.cpp
    
    for(int i = a; i <= b; i++){
        if(checkPrime(i))
            cout<<i<<" ";
    }
    cout<<endl;
<<<<<<< HEAD:Math functions/prime number/prime.cpp


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
=======
>>>>>>> 2662143014b24d420dc909172e8354b7872b2dcb:Math functions/prime number/checkPrime/prime.cpp

    
}
//Time Complexity: O(N^2)
//Space Complexity O(1)