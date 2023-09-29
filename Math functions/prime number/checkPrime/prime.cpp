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
    cout<<"Enter your prime number range :";
    cin>>a>>b;
    
    for(int i=a; i <= b; i++){
        if(checkPrime(i))
            cout<<i<<" ";
    }
    cout<<endl;

    
}
//Time Complexity: O(N^2)
//Space Complexity O(1)