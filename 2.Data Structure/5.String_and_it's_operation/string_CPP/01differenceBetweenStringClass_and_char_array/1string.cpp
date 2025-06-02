#include<bits/stdc++.h>
using namespace std;


int main(){


   char s[10]="hello";
   cout << "The string is: " << s << endl;
   //we cant assign a new value to s
   // s = "world"; // This will cause a compilation error


    // Instead, we can use strcpy to change the content of the char array
    strcpy(s, "world");
    cout << "After changing, the string is: " << s << endl;


    
    // We can also use the string class for more flexibility
    string str = "hello";
    cout << "The string class string is: " << str << endl;
    // We can assign a new value to str
    str = "world"; 
    cout << "After changing, the string class string is: " << str << endl;

    //we can take  string with spaces
    string strWithSpaces = "Hello World how are you";
    cout << "String with spaces: " << strWithSpaces << endl;
    //we can also take string with spaces in char array
    char charArrayWithSpaces[50] = "Hello World how are you";
    cout << "Char array with spaces: " << charArrayWithSpaces << endl;
    // We can also use getline to take input with spaces
    string inputString;
    cout << "Enter a string with spaces: ";
    getline(cin, inputString);
    cout << "You entered: " << inputString << endl;

return 0;
}