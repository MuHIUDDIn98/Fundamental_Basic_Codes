#include<bits/stdc++.h>
using namespace std;
void reverse_array(char arr[],int i, int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverse_array(arr,i+1,j-1);

}

void printArray(char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}


int main(){
    char arr[7] = {'a','b','c','d','e','f','g'};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);
    
    reverse_array(arr,0,size-1);
    
    cout << "Array after swapping: ";
    printArray(arr, size);
    
    return 0;

    return 0;
}