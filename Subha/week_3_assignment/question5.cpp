#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> removeDuplicates(vector<int> arr) {
    set<int> uniqueElements(arr.begin(), arr.end());
    return vector<int>(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> distinctArr = removeDuplicates(arr);

    for (int num : distinctArr) {
        cout << num << " ";
    }
    return 0;
}