// Write a C++ program to rotate an array to the right by k
// positions
#include <iostream>
using namespace std;

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle if k > n

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Enter number of positions to rotate: ";
    cin >> k;

    cout << "Original array: ";
    printArray(arr, n);

    rotateRight(arr, n, k);

    cout << "Array after rotating right by " << k << " positions: ";
    printArray(arr, n);

    return 0;
}
