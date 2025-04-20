#include <iostream>
using namespace std;

void mergeAndReverse(int arr1[], int arr2[], int n1, int n2) {
    int merged[n1 + n2];

    // Merge the arrays
    for (int i = 0; i < n1; i++) merged[i] = arr1[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];

    // Print in reverse order
    for (int i = n1 + n2 - 1; i >= 0; i--) cout << merged[i] << " ";
}

int main() {
    int arr1[] = {1, 3, 5}, arr2[] = {2, 4, 6};
    mergeAndReverse(arr1, arr2, 3, 3);
    return 0;
}