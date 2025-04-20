// Write a C++ program to remove duplicates from an array and
//  create a new array and store all distinct elements
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n, int result[]) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] already exists in result[]
        for (int j = 0; j < index; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to result[]
        if (!isDuplicate) {
            result[index++] = arr[i];
        }
    }

    return index; // New size of the result array
}

int main() {
    int arr[] = {1, 5, 2, 1, 3, 5, 4, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n]; // New array to store distinct elements

    int newSize = removeDuplicates(arr, n, result);

    cout << "Array with distinct elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
