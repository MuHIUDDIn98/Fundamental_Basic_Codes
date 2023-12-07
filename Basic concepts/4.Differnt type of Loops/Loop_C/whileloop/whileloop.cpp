#include <iostream>
using namespace std;

int main()
{
   /* int num = 1;
    while (num < 6) {
        cout << "Number: " << num << endl;
        num = num + 1;
    }
*/


    int num = 1;
    int number;
    int total = 0;
 cout<<"Enter your numbers:"<<endl;

    while (num <= 5) {
        cin >> number;
        total += number;
        num++;
    }
    cout << "addition of enterd numbers: "<<total << endl;

    return 0;
}




