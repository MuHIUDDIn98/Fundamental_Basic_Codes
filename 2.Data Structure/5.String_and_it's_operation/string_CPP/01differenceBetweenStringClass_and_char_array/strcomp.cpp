#include<bits/stdc++.h>
using namespace std;


int main(){


   char str[10] = "Hello";
   char str2[10] = "Hello";
   if(strcmp(str, str2) == 0) {
       cout << "The strings are equal." << endl;
   } else {
       cout << "The strings are not equal." << endl;
   }    

   string str3 = "Hello";
    string str4 = "Hell";
    if(str3 == str4) {
         cout << "The string class strings are equal." << endl; 
    } else {
         cout << "The string class strings are not equal." << endl; 
    }   
return 0;
}