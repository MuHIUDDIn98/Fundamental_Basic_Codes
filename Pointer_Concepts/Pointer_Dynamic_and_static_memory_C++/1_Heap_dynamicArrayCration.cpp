#include <iostream>
using namespace std;

int main()
{
    int size; 
    cout<<"Enter number of elements :";
    cin>>size;
    int B[size];

    cout<<"Size of array B : "<<sizeof B<<" Byte"<<endl; 


    int A[5] = {1, 2, 3, 4, 5}; //---> stack memory loaction

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    int *p;

    p = new int[5]; //------->heap momory location

    for (int i = 0; i < 5; i++)
    {
        p[i] = A[i];
    }
    // p[0]=11;
    // p[1]=22;
    // p[2]=33;
    // p[3]=44;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p; // dlete heam array
    p = nullptr; //delete pointer
}