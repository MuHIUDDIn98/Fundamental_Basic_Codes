#include <iostream>
#include <iomanip>  // For setw function

using namespace std;

// Function to convert a 4x4 matrix into sequential numbers
void sequentialMatrix(int matrix[4][4]) {
    int count = 1;  // Start counting from 1

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            matrix[i][j] = count;
            count++;
        }
    }
}

// Function to display a 4x4 matrix
void displayMatrix(int matrix[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4];

    // Convert matrix to sequential numbers
    sequentialMatrix(matrix);

    // Display the resulting matrix
    displayMatrix(matrix);

    return 0;
}