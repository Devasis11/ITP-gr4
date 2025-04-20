// Write a C++ program to move all the negative elements to one
//  side of the array.
#include <iostream>
using namespace std;

// Function to move all negative numbers to one side
void moveNegativesToLeft(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left <= right) {
        // If left is negative and right is positive, move both pointers
        if (arr[left] < 0 && arr[right] >= 0) {
            left++;
            right--;
        }
        // If left is positive and right is negative, swap
        else if (arr[left] >= 0 && arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        // If both are negative, move left pointer
        else if (arr[left] < 0 && arr[right] < 0) {
            left++;
        }
        // If both are positive, move right pointer
        else {
            right--;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    moveNegativesToLeft(arr, size);

    cout << "Array after moving negatives to one side: ";
    printArray(arr, size);

    return 0;
}
