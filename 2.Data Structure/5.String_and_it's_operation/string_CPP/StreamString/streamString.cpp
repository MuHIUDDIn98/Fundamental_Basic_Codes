#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string init_string = "Welcome to anik's tutorial";  

    // Creating stringstream object

    stringstream ss(init_string);    

    // Array to store returned words

    string ret_words[5];

    string buf;

        int x = 0;
        
    while (ss >> buf) {

        ret_words[x] = buf;

        cout << "The Buffer: " << buf << endl;

        x++;

    } 

    // Printing the string

    cout << "Printing the array of strings\n";

    for (int y = 0; y < x; y++) {

        cout << ret_words[y] << endl;

    } 

    return 0;

}