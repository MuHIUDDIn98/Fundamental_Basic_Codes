#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter your Array Size :"<<endl;
    cin>>size;
    int *p;
    p = new int[size]; // array creation in heap
    cout << "Enter your dynamic array  elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Array in heap p[] value of indx " << j << ":" << j[p] << endl;
    }
    delete []p;//delete pointer for prevent memeory leakage
 }