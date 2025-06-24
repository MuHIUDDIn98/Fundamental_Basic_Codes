#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Index of the element you want to remove
    int indexToRemove = 2;  // Remove the element at index 2 (which is 3)

    // Check if the index is within bounds
    if (indexToRemove >= 0 && indexToRemove < myVector.size()) {
        // Use erase to remove the element at the specified index
        myVector.erase(myVector.begin() + indexToRemove);

        // Display the modified vector
        cout << "Vector after removing element at index " << indexToRemove << ": ";
        for (int num : myVector) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid index to remove." << endl;
    }


    myVector.erase(myVector.begin()+1,myVector.begin()+3);


    // Display the modified vector
        cout << "Vector after removing element at index 1 to 3  :";
        for (int num : myVector) {
            cout << num << " ";
        }
        cout << endl;



    return 0;
}
