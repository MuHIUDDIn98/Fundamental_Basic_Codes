

// C++ Program to implement
// Bubble sort
// using template function
#include <iostream>
using namespace std;
 
// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
 
// Driver Code
int main()
{
    float a[5] = { 10.3, 50.5, 30.555, 40.1, 20.9 };
    double b[6] = {2.11,4.55,6.99,9.99,12.1,11.555};
    char c[9] = {101,98,99,100,97,102,105,103,106};


    //array size calculation...
    int n = sizeof(a) / (int)sizeof(a[0]);
    int k = sizeof(b) / (int)sizeof(b[0]);
    int l = sizeof(c) / (int)sizeof(c[0]);


    // calls template function
    bubbleSort<float>(a, n);
    bubbleSort<double>(b,n);
    bubbleSort<char>(c,l);
 
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    cout << " Sorted array : ";
    for (int i = 0; i < k; i++)
        cout << b[i] << " ";
    cout << endl;
    
     cout << " Sorted array : ";
    for (int i = 0; i < l; i++)
        cout << c[i] << " ";
    cout << endl;
 

    return 0;
}