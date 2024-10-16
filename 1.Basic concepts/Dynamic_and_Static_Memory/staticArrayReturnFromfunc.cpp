#include<bits/stdc++.h>

using namespace std;

int* fun()

{

 int a[5]; // declear a static array size 5

 for(int i=0;i<5;i++)

 {

 cin >> a[i]; // taking input

 } 

 return a; // return the static array..

}

int main()

{

 int *p = fun(); // receiving the static array using pointer 

 for(int i=0;i<5;i++)

 {

 cout << p[i] << " "; // try to print the array but it is not possible...........

 }

}
