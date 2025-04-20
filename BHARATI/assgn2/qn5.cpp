// Write a C++ program to find the second smallest elements in a
// given array of integers(all elements of array distinct).
#include<iostream>
using namespace std;

int main() {
    int n;

    // Input size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Minimum 2 elements required
    if(n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 0;
    }

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " distinct elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMin, secondMin;

    // Initialize the two smallest with first two elements
    if(arr[0] < arr[1]) {
        firstMin = arr[0];
        secondMin = arr[1];
    } else {
        firstMin = arr[1];
        secondMin = arr[0];
    }

    // Traverse rest of the array
    for(int i = 2; i < n; i++) {
        if(arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if(arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }

    cout << "Second smallest element is: " << secondMin << endl;

    return 0;
}
