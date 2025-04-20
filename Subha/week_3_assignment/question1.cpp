// Write a C++ program to move all the negative elements to one
// side of the array.
 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rearrange(vector<int> &arr) {
    partition(arr.begin(), arr.end(), [](int x) { return x < 0; });
}

int main() {
    vector<int> arr = {1, -2, 3, -4, 5, -6, 7, -8};
    rearrange(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
