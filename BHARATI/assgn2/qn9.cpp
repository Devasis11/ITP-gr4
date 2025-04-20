// Print all elements of an array using recursion
#include<iostream>
using namespace std;

// Recursive function to print array elements
void printArray(int arr[], int size, int index = 0) {
    if(index == size)
        return;

    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int n;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print array using recursion
    cout << "Array elements are: ";
    printArray(arr, n);
    cout << endl;

    return 0;
}
