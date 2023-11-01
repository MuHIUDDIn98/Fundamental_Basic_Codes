
#include<iostream>
using namespace std;

int main()
{
	int num, n;

 cout<<"Enter your number: ";
 cin>>num;
 cout<<"Enter your nth bit ";
 cin>>n;
  num = num & ~(1 << (n-1));

	cout<<"Nth bit Off number is :"<<num;

	return 0;
}