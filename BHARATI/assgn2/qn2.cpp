// Write a C++ program to sort a given array using function.
#include<iostream>
using namespace std;

// Function to sort the array in ascending order
void sortArray(int arr[], int size) {
    // Bubble Sort algorithm
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sortArray(arr, size);

    // Print sorted array
    cout << "Sorted array in ascending order:\n";
    printArray(arr, size);

    return 0;
}

