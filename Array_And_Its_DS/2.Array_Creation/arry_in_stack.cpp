#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout << "Enter element number :" << endl;
    cin >> n;
    cout<<"you Entered :"<<n<<endl;
    cout << "Enter your elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "your  entered arr[] elements are  :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[] index: " << i << ":" << i[arr] << endl;
    }

 }