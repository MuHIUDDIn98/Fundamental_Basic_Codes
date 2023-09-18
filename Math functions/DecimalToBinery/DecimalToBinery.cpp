#include <iostream> 
#include<string>

using namespace std; 

int main()  
{  
    int a[10], n, i;   
    string num=""; 
    cout<<"Enter the number to convert: ";    
    cin>>n;    
    for(i=0; n>0; i++)    
    {    
    a[i]=n%2;    
    n = n/2;  
    }    
    
    for(i=i-1 ;i>=0 ;i--)    
    {string ns=to_string(a[i]);
    num+=ns;
    } 
    cout<<"Binary of the given number : ";   
    cout<<num;

}  