


#include<iostream>

using namespace std;

main()

{

  int n,factorial=1;
  cout<<"Enter your number you want to factorial:";
  cin>>n;


  if(n<0){


 cout<<"you can not factorial this value:";
  }


  else  if(n<=1)
  {
        cout<<"factorial of "<<n <<"! is="<<factorial;
  }
  else{
  for(int i=1; i<=n; i++){

    factorial=factorial*i;

  }

  cout<<"factorial of "<<n<<"! is="<<factorial;


}
}
