#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    int size;
    cout << "Enter size of array: "; cin >> size;
    int arr[size];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];

    sortArray(arr, size);
    for (int i : arr) cout << i << " ";
    return 0;
}
