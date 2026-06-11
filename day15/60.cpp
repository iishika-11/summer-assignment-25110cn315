//move zeroes to an endt
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

    int j = 0; // position for non-zero

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    while(j < n) {
        arr[j++] = 0;
    }

    cout << "Array after moving zeroes:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}