#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Descending Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {  // changed sign
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Sorted array (Descending):\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}