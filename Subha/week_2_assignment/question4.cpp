#include <iostream>
#include <unordered_map>
using namespace std;

int findMaxOccurring(int arr[], int size) {
    unordered_map<int, int> freq;
    for (int i = 0; i < size; i++) freq[arr[i]]++;

    int max_count = 0, max_num = arr[0];
    for (auto &pair : freq)
        if (pair.second > max_count) {
            max_count = pair.second;
            max_num = pair.first;
        }

    return max_num;
}

int main() {
    int size;
    cout << "Enter size of array: "; cin >> size;
    int arr[size];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];

    cout << "Max occurring: " << findMaxOccurring(arr, size);
    return 0;
}