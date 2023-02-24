#include<iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {


       Color c ;

    cout<<"Enter your color name :";
    cin>>c;
 
    if (c == RED) {
      cout << "The color is red!" <<endl;
    } else if (c == GREEN) {
     cout << "The color is green!" <<endl;
    } else if (c == BLUE) {
        cout << "The color is blue!" << endl;
    }

    return 0;
}