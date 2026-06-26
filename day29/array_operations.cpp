#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n--- Array Menu ---\n";
        cout << "1. Display\n2. Sum\n3. Find Max\n4. Search\n5. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }

            case 3: {
                int max = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] > max) max = arr[i];
                cout << "Max = " << max;
                break;
            }

            case 4: {
                int key, found = 0;
                cout << "Enter element to search: ";
                cin >> key;
                for(int i = 0; i < n; i++) {
                    if(arr[i] == key) {
                        cout << "Found at index " << i;
                        found = 1;
                        break;
                    }
                }
                if(!found) cout << "Not found";
                break;
            }

            case 5: cout << "Exit"; break;
            default: cout << "Invalid choice";
        }

    } while(choice != 5);

    return 0;
}