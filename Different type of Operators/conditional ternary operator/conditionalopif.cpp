#include <iostream>
using namespace std;

int main()
{
    int age ;
    cout<<"enter your age=";
    cin>>age;
    if (age > 14) {
        if(age >= 18) {
            cout << "Adult"<<endl;
        }
        else {
            cout << "Teenager"<<endl;
        }
    }
    else {
        if (age > 0) {
            cout << "Child"<<endl;
        }
        else {
            cout << "Something's wrong"<<endl;
        }
    }
     int agee;
    cout<<"Enter your agee: "<<endl;
    cin>>agee;

    if (agee == 16) {
        cout <<"Too young";
    }
    if (agee == 42) {
        cout << "Adult";
    }
    if (agee == 70) {
        cout << "Senior";
    }

    return 0;
}
