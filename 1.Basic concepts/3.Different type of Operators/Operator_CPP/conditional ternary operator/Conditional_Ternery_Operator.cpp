#include<iostream>
using namespace std;

main()
{
  //Expression1?Expression2:Expression3
   int num1,num2;
   cout<<"Enter two numbers=";
   cin>>num1;
   cin>>num2;
  //condition ? expression_if_true : expression_if_false

   int max=num1>num2?num1:num2;

    cout<<"Large number is="<<max<<endl;

    //===========even odd===============

    int num;

    cout<<"enter your number=";
    cin>>num;

    (num%2==0)? cout<<num<<" is the even number"<<endl : cout<<num<<" is odd number"<<endl;

}
