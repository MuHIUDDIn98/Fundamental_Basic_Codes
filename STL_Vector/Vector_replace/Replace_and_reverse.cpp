#include <algorithm>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main() {  
  vector<int> v = { 3,1,2,1,2,5,1,6,1,9,1 };  
  
  replace(v.begin(), v.end(), 1, 1000);  
  
  for(int x:v){
    cout<<x<<" ";
  }

   reverse(v.begin(),v.end());
   cout<<endl;
  for(int x:v){
    cout<<x<<" ";
  }
    return 0;  
}  