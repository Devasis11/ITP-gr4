// Take two array as input, merge them and print it in reverse order using loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a[i];
// cout<<"first array";
// cin>>n;
// cout<<a[i];

// }
#include<iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first and second arrays
    cout << "Enter size of first array: ";
    cin >> n1;
    int a[n1];
    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int b[n2];
    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    // Merging arrays
    int merged[n1 + n2];
    for(int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for(int i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
    }

    // Printing in reverse order
    cout << "Merged array in reverse order:\n";
    for(int i = n1 + n2 - 1; i >= 0; i--) {
        cout << merged[i] << " ";
    }

    return 0;
}
