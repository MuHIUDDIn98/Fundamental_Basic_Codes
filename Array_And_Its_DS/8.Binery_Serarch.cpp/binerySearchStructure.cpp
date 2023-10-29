#include <iostream>
using namespace std;
struct Array
{

    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << "Elements are :";
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }

    cout << endl;
}

void sorting(struct Array *arr)
{

    for (int i = 0; i < arr->length - 1; i++)
    {
        for (int j = i + 1; j < arr->length; j++)
        {
            if (arr->A[j] < arr->A[i])
            {
                int temp = arr->A[j];
                arr->A[j] = arr->A[i];
                arr->A[i] = temp;
            }
        }
    }
}
int BinarySearch(struct Array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {

        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;

        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{

    struct Array array = {{1, 5, 7, 9, 20, 12, 14, 13, 12, 16, 18}, 20, 11};
    Display(array);
    sorting(&array);
    Display(array);
    int searchedIndex = BinarySearch(array,13);
    //cout<<BinarySearch(array,13)<<endl;
    cout<<array.A[searchedIndex]<<endl;

    return 0;
}