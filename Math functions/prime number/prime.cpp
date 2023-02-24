#include<iostream>
using namespace std;
main()
{

    int cnt=0;
    int num;
    cout<<"Enter your number =";
    cin>>num;

    for(int i=2; i<num; i++){

        if(num%i==0){

            cnt++;
            break;

        }
    }

    if(cnt==0)
    {

        cout<<"Your entered number is a prime number";

    }
    else{

        cout<<"Your entered number is not  a prime number";
    }
}
