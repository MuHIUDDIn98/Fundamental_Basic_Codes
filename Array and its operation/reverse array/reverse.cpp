#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int n;
 cout<<"Enter your arrary size :";
 cin>>n;
 int arr[n];
 cout<<"Enter all element:";
 for(int i=0;i<n;i++){
   cin>>arr[i];  
     
 }
 for(int i=n-1;i>=0;i--){
     
     cout<<arr[i]<<' ';
     
 }
 
 return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
}