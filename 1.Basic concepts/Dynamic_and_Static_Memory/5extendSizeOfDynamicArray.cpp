#include <iostream>
#include <algorithm>

using namespace std;

int* resizeArray(int* oldArray, int oldSize, int newSize) {
    cout << "Manually resizing from " << oldSize << " to " << newSize << "..." << endl;

    int* newArray = new int[newSize];

    int elementsToCopy = min(oldSize, newSize);
    for (int i = 0; i < elementsToCopy; ++i) {
        newArray[i] = oldArray[i];
    }

    if (newSize > oldSize) {
        for (int i = oldSize; i < newSize; ++i) {
            newArray[i] = 0;
        }
    }

    delete[] oldArray;

    return newArray;
}

void printRawArray(const int* arr, int size) {
    if (!arr) return;
    cout << "Array: [ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}


int main() {
    int currentSize = 3;
    int* myArray = new int[currentSize];
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;

    cout << "Original ";
    printRawArray(myArray, currentSize);

    int newSize = 5;
    myArray = resizeArray(myArray, currentSize, newSize);
    currentSize = newSize; 

    myArray[3] = 40;
    myArray[4] = 50;

    cout << "Resized ";
    printRawArray(myArray, currentSize);

    delete[] myArray;

    return 0;
}