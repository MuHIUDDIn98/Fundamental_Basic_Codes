#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 14, 11, 13, 1, 2, 7, 5, 3, 8};
    int mid;

    cout << "Before sorting :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
  //sorting process selection sort... 
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
cout<<endl;
    cout << "after sorting :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

    int key;
    int l = 0;
    cout<<" L :"<<l<<endl;
    int r = 9;
    cout<<" r :"<<r<<endl;
    cout << "Enter key  to search :" << endl;
    cin >> key;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key == arr[mid])
        {
            cout << "Found at index " << mid << endl;
            return 0;
        }
        else if (key < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }    
    }
     if(l>r){
            cout<<"key not found"<<endl;
        }
}