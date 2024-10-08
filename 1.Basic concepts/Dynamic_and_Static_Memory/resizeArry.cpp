#include <iostream>
using namespace std;

// Function to resize an array
int* resizeArray(int* arr, int oldSize, int newSize) {
    // Allocate a new array with the larger size
    int* newArr = new int[newSize];
    
    // Copy the old array elements to the new array
    for (int i = 0; i < oldSize; i++) {
        newArr[i] = arr[i];
    }
    
    // Initialize the rest of the new elements (optional)
    for (int i = oldSize; i < newSize; i++) {
        newArr[i] = 0;  // Default initialization (you can set other values if needed)
    }
    
    // Delete the old array to free up memory
    delete[] arr;
    
    // Return the new array
    return newArr;
}

int main() {
    int n;
    cout << "Enter the original array size: ";
    cin >> n;

    // Dynamically allocate an array of size 'n'
    int* arr = new int[n];

    // Take input for the original array
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Increase the size of the array
    int newSize;
    cout << "Enter the new array size: ";
    cin >> newSize;

    // Call the resizeArray function
    arr = resizeArray(arr, n, newSize);

    // Print the resized array
    cout << "Resized array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the resized array memory
    delete[] arr;

    return 0;
}
