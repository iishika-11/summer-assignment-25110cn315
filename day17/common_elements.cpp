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

    cout << "Common Elements (Unique):\n";

    for(int i = 0; i < n1; i++) {
        bool alreadyPrinted = false;

        // Check duplicate in arr1
        for(int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted) continue;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}