#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateArray(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k > n
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    rotateArray(arr, k);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}