#include <iostream>
using namespace std;
struct Array
{

    int A[10];
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

struct Array *Intersec(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;

    // struct Array *arr3 = new int[arr3->length];
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else if(arr1->A[i]==arr2->A[j])

        {   arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    

    arr3->length = k;
    arr3->size = 10;
   
    return arr3;
}

int main()
{
    // Marging can be done only on sorted list
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{2, 6, 10, 15, 20}, 10, 5};
    struct Array *arr3;

    arr3 = Intersec(&arr1, &arr2);
    Display(*arr3);
    return 0;
}