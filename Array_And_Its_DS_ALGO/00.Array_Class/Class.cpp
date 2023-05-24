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

int main()
{

    Array Arr(10);

    for (int i = 0; i <9; i++)
    {
        Arr.Insert(i, i);
    }

    Arr.Display();
    Arr.Append(33);
    Arr.Display();
    Arr.Delete(9);
    Arr.Display();
    Arr.Delete(8);
    Arr.Display();
    Arr.Delete(7);
    Arr.Display();
    Arr.Delete(6);
    Arr.Display();
}