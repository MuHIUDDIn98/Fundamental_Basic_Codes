#include <iostream>
using namespace std;

class Array
{

private:
    int *A;
    int size;
    int length;

public:
    Array()
    {

        A = new int[10];
        size = 10;
        length = 0;
    }
    Array(int sz)
    {
        size = sz;
        A = new int[size];
        length = 0;
    }
    ~Array()
    {
        delete[] A;
    }

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Get(int index);
    void Append(int x);
    int isSorted();
    int LinearSearch(int key);
    void swap(int *x,int *y);
    int BinarySearch(int key);
};

void Array ::Display()
{

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::Append(int x)
{
    if (length < size)
        A[length++] = x;
}

void Array ::Insert(int index, int x)
{

    if (index >= 0 && index <= length)
    {

        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }
}
int Array ::Delete(int index)
{
    int x;
    if (index >= 0 && index < length)
    {
        x = A[index];

        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    return 0;
}

int Array::Get(int index)
{
    if (index >= 0 && index < length)
        return A[index];
    return -1;
}

int Array :: isSorted()
{
 int i;
 for(i=0;i<length-1;i++)
 {
 if(A[i]>A[i+1])
 return 0;
 }
 return 1;
}


int Array::LinearSearch(int key)
{
 int i;
 for(i=0;i<length;i++)
 {
 if(key==A[i])
 {
 swap(&A[i],&A[0]);
 return i;
 }
 }
 return -1;
}

void Array::swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}


int Array::BinarySearch(int key)
{
 int l,mid,h;
 l=0;
 h=length-1;
 
 while(l<=h)
 {
 mid=(l+h)/2;
 if(key==A[mid])
 return mid;
 else if(key<A[mid])
 h=mid-1;
 else
 l=mid+1;
 }
 return -1;
}

int main()
{

    Array Arr(10);

    for (int i = 0; i <9; i++)
    {
        Arr.Insert(i, i*2);
    }

    Arr.Display();
    Arr.Append(0);
    Arr.Display();
    cout<<" sorting check result "<<Arr.isSorted()<<endl;
    Arr.Delete(9);
    Arr.Display();
    Arr.Delete(8);
    Arr.Display();
    Arr.Delete(7);
    Arr.Display();
    Arr.Delete(6);
    Arr.Display();
   
    cout<<" sorting check result "<<Arr.isSorted()<<endl;
    Arr.Append(0);
    Arr.Display();
    cout<<" sorting check result "<<Arr.isSorted()<<endl;

   cout<<"Searching key "<<Arr.LinearSearch(0)<<endl;
   cout<<"Searching key "<<Arr.BinarySearch(10)<<endl;
}