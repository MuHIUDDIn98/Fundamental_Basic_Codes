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

    cout << "after sorting :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

    int key;
    int l = arr[0];
    int h = arr[9];
    cout << "Enter key  to search :" << endl;
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "Found at index " << mid << endl;
            return 0;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}