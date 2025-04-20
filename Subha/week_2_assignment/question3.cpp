#include <iostream>
using namespace std;

void copyArray(int src[], int dest[], int size) {
    for (int i = 0; i < size; i++) dest[i] = src[i];
}

int main() {
    int size;
    cout << "Enter size of array: "; cin >> size;
    int src[size], dest[size];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> src[i];

    copyArray(src, dest, size);
    for (int i : dest) cout << i << " ";
    return 0;
}