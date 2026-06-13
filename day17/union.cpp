#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cin >> n1;
    int arr1[n1];
    for(int i = 0; i < n1; i++) cin >> arr1[i];

    cin >> n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++) cin >> arr2[i];

    int uni[n1 + n2];
    int k = 0;

    // Add first array
    for(int i = 0; i < n1; i++) {
        uni[k++] = arr1[i];
    }

    // Add unique elements of second array
    for(int i = 0; i < n2; i++) {
        bool found = false;
        for(int j = 0; j < k; j++) {
            if(arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            uni[k++] = arr2[i];
        }
    }

    cout << "Union:\n";
    for(int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }
}