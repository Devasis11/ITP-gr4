#include <iostream>
#include <algorithm>
using namespace std;

int findSecondSmallest(int arr[], int size) {
    sort(arr, arr + size);
    return arr[1];
}

int main() {
    int size;
    cout << "Enter size of array: "; cin >> size;
    int arr[size];

    cout << "Enter elements (distinct integers): ";
    for (int i = 0; i < size; i++) cin >> arr[i];

    cout << "Second smallest: " << findSecondSmallest(arr, size);
    return 0;
}